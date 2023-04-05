#include "Convert.hpp"
#include <iomanip>
#include <iostream>

/*                    Constructors                    */

Convert::Convert(){}

// Convert::Convert(char *input){

// }

Convert::Convert(const Convert & src){
	*this=src;
}

Convert::~Convert(){}

/*                    Operators                    */

Convert&	Convert::operator=(const Convert & rhs){
	return (*this);
	(void)rhs;
}

/*                    Actions                    */

void	Convert::convertInput(char *in)
{
	//int n = this->searchType(in);
	switch (this->searchType(in))
	{
	case 0:
		std::cout << "\033[31mError:\033[0m No cast possible" << std::endl;
		break;
	case -1:
		this->makeInf(in, 1);
		break;
	case -2:
		this->makeInf(in, 0);
		break;
	case -3:
		this->makeNan(in);
		break;
	case 1:
		this->makeDouble(in);
		break;
	case 2:
		this->makeDouble(in);
		break;
	case 3:
		this->makeDouble(in);
		break;
	case 4:
		this->makeChar(in);
		break;
	}
}

int	Convert::searchType(char *in){
	std::string	sin = in;
	short	nb = 0;
	short	f = 0;
	//infinit and nan
	if (!std::strcmp(in, "-inff") || !std::strcmp(in, "-inf"))
		return (-1);
	else if (!std::strcmp(in, "+inff") || !std::strcmp(in, "+inf"))
		return (-2);
	else if (!std::strcmp(in, "nan") || !std::strcmp(in, "nanf"))
		return (-3);
	// Other true type
	//[CHAR]
	if (sin.length() == 1 && !std::isdigit(sin[0]))
		return 4;
	else if (sin.length() == 1 && std::isdigit(sin[0]))
		return 1;
	// [INT]
	if (sin.length() <= 10 && in[0] == '-')
	{
		for (size_t i = 1; i < sin.length(); i++){
			if (!std::isdigit(sin[i]))
				break;
			else if (i == sin.length() - 1)
				return 1;
		}
	}
	else if (sin.length() <= 10)
	{
		for (size_t i = 0; i < sin.length(); i++){
			if (!std::isdigit(sin[i]))
				break;
			else if (i == sin.length() - 1)
				return 1;
		}
	}
	//[DOUBLE]
	nb = 0;
	if (in[0] == '-')
	{
		for (size_t i = 1; i < sin.length(); i++){
			if (in[i] == '.')
				nb++;
			if (!std::isdigit(sin[i]) && sin[i] != '.')
				break;
			else if (i == sin.length() - 1 && nb <= 1 && sin[i] != '.')
				return 2;
		}
	}
	else if (in[0] != '.')
	{
		for (size_t i = 0; i < sin.length(); i++){
			if (in[i] == '.')
				nb++;
			if (!std::isdigit(sin[i]) && sin[i] != '.')
				break;
			else if (i == sin.length() - 1 && nb <= 1 && sin[i] != '.')
				return 2;
		}
	}
	//[FLOAT]
	nb = 0;
	f = 0;
	if (in[0] == '-')
	{
		for (size_t i = 1; i < sin.length(); i++){
			if (in[i] == '.')
				nb++;
			if (sin[i] == 'f')
				f++;
			if (!std::isdigit(sin[i]) && sin[i] != '.' && sin[i] != 'f')
				break;
			else if (i == sin.length() - 1 && nb <= 1 && sin[i] == 'f' && f == 1)
				return 3;
		}
	}
	else if (in[0] != '.')
	{
		for (size_t i = 0; i < sin.length(); i++){
			if (in[i] == '.')
				nb++;
			if (sin[i] == 'f')
				f++;
			if (!std::isdigit(sin[i]) && sin[i] != '.' && sin[i] != 'f')
				break;
			else if (i == sin.length() - 1 && nb <= 1 && sin[i] == 'f' && f == 1 && sin[i - 1] != '.')
				return 3;
		}
	}
	// Execption
	return 0;
}

void	Convert::makeInf(char *in, int n){
	if (n == 1){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (n == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	(void)in;
}

void	Convert::makeNan(char *in){
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
	(void)in;
}

void	Convert::makeDouble(char *in){
	double	d;
	try
	{
		d = std::stod(in);
	}
	catch (const std::exception & e)
	{
		std::cout << "char: Non Dislayable" << std::endl;
		std::cout << "int: Non Dislayable" << std::endl;
		std::cout << "float: Non Dislayable" << std::endl;
		std::cout << "double: Non Dislayable" << std::endl;
		return ;
	}
		int		i = static_cast<int>(d);
		float	f = static_cast<float>(d);
		char	c = 0;
		if (31 < i && i < 127)
			c = static_cast<char>(i);
		this->affichage(i, f, d, c);
	(void)in;
}

void	Convert::makeChar(char *in){
	int		i = static_cast<int>(*in);
	double	d = static_cast<double>(*in);
	float	f = static_cast<float>(*in);
	this->affichage(i, f, d, *in);
	(void)in;
}

void	Convert::affichage(int i, float f, double d, char c){
	std::cout << std::fixed << std::setprecision(1);
	if (31 < d && d < 127)
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non Dislayable" << std::endl;
	if (std::numeric_limits<int>::min() <= d && d <= std::numeric_limits<int>::max())
		std::cout << "int: " << i << "" << std::endl;
	else
		std::cout << "int: Non Dislayable" << std::endl;
	if (-std::numeric_limits<float>::max() <= d && d <= std::numeric_limits<float>::max())
		std::cout << "float: " << f << "f" << std::endl;
	else
		std::cout << "float: Non Dislayable" << std::endl;
	std::cout << "double: " << d << "" << std::endl;
}
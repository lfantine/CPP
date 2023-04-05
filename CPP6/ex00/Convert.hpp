#pragma once

class	Convert
{
public:
	//CONSTRUCTORS
	Convert();
	// Convert(char* input);
	Convert(const Convert & src);
	~Convert();

	//OPERATORS
	Convert&	operator=(const Convert & rhs);

	//ACTIONS
	void	convertInput(char *in);
private:
	int		searchType(char *in);
	void	makeDouble(char *in);
	void	makeChar(char *in);
	void	makeNan(char *in);
	void	makeInf(char *in, int n);
	void	affichage(int i, float f, double d, char c);
};
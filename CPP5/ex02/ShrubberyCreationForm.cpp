#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

#define TREE "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,@@@@,,,*,@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,,@,,@*,@@@,@@@@(,(@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,,,@@@@@,@@,,@,@,,#@@,,@@@,*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,,,@@@&@@@@@@,%@@,,@@*@,,@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,@@,@@@,@/,@@,,@@@%,@,,@@,@@@,,,,,,/@@,,,,@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,@@,*@@@,,,,,@,,@@@,@@@,@@@,,@@@,,@@,@%**@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@,@@,,,@@,,,@@@@@@@@@@@@,,#,@#,@@@,,,@@@@@@@@@@@@@@#,,,@,@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@,@@@@*,@@@@@,#,@@(@@@(,@@@@,,@@,,@@@@@@@@*,@,@@,,@@@/,@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@,,&@@@,@@*@,@*@,*@,,@@,,@,,*,@@,,@@,,@@,/@@,@,,@,,,@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@,,,@@@@@&,,*@@@,,,@&&@/@@,,@@@,@@,,,,/@,,,,,@@@@@,,@/(@@@@@%/,@@(,,(@@@,&@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@,,,@@@@,,##,,,,,@,@@@&,@@@@,@@,,,@@@@@@@@*,@@@*,@,,,@@@@,@@,*@@@,,*@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@,,,,,,,@@@@,,,@@,,@@,@@,,,@@@@,,%@,,@@@@@,@@@@@,,@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@,,,@@@@@@@@@,,,@@@,,,@@,*@@,,,@@,,@@@@,@@,@,,&,,,,@@@,,/@@@@,,,@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@*,,,@@@/,,,,,@@@@@@@@@@,,,@@@@,,/@,,@@@,,@@,&@@%/*/%@@@@/,,,,,,@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@,,*@@@@@@,,,@@#%@@@@@@@@*,,,,,,,@@,,@@,@,,@@@,,*@@@@@@@@@,,*@@@,**,,,@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@(,,@(,@@@@(,,@@,,,,,,,,@@@@@@,,,@@@@@@#@@@@@&,@@@,,@*,,,,,&@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@,,,/,,@,,@@,,@@@@,,@@@@@@,,@,#,,,,@@@*,,*@@@,*@@@@@@,,@@@,*@@,,@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@*/,,,@@,,@@,,@@@@@@@@/,,,,,,*/#,,,,@,,,,@@*,@@@@@@,,,@@@@@@@@@@@#@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@,*@@@,,@@@@@,,,@@@@,,,,@,,,,,,,,@@@@@@@@@@@@,*,@@@@@,,@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,,,,@@@,,@@@@&,@@@,,,,,,,,,#@@@@@@@,@@#,,,,,@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,/@@@@@,,@@@@,,,,,,@@@@@@,@@,,,/@@@@,,,,,,*@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,*,,/,%@@@@@@@,,,,,@@@@@@@@,/@@@@*,@@@@@,,,,,,@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,,,,,@@@@@@@@@@,,@@@@,@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,,,,,@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,,,,,@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,,/,,@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,,,,,,,@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,,,,,,,,@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,,,,,,,,,@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"

/*                    Constructors                    */

ShrubberyCreationForm::ShrubberyCreationForm() : Form("DefaultShrubberyCreationForm", 145, 137)
{
	std::cout << "\033[2m" << "ShrubberyCreationForm default constructor called" << "\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : Form(name, 145, 137, target)
{
	std::cout << "\033[2m" << "ShrubberyCreationForm constructor called" << "\033[0m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\033[2m" << "ShrubberyCreationForm destructor called" << "\033[0m" << std::endl;
}

/*                    ACTIONS                    */

void	ShrubberyCreationForm::makeExecute() const
{
	std::ofstream	ofs;
	ofs.open (this->_target + "_shrubbery", std::ofstream::out);
	ofs << TREE << std::endl;
	ofs.close();
}
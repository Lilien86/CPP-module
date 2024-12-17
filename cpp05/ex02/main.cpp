#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int     main(void)
{
	try {
		ShrubberyCreationForm f1("lilien");
	} catch(const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << std::endl; 
	try {
		ShrubberyCreationForm f2("yvann");
	} catch(const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << std::endl;
	try {
		Bureaucrat c("-BOSS-Chris", 1);
		Bureaucrat d("-NOOB-otherChris", 125);
		ShrubberyCreationForm A("Tarouk");
		RobotomyRequestForm	B("Romarin");
		PresidentialPardonForm	C("Edismoi");
		std::cout << A << std::endl;
		std::cout << B << std::endl;
		std::cout << C_MAGENTA << std::endl <<  "~~~sign form~~~" << std::endl;
		c.signForm(A);
		c.signForm(B);
		c.signForm(C);
		// d.signForm(C);

		std::cout << C_MAGENTA << std::endl << "~~~exec form~~~" << C_WHITE << std::endl;
		// A.execute(d);
		A.execute(c);
		B.execute(c);
		B.execute(c);
		C.execute(c);
		std::cout << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << '\n';
	}

	return 0;
	
}
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
		Bureaucrat c("Chris", 5);
		ShrubberyCreationForm A("Tarouk");
		RobotomyRequestForm	B("Romarin");
		PresidentialPardonForm	C("Edismoi");
		std::cout << A << std::endl;
		std::cout << B << std::endl;
		A.beSigned(c);
		B.beSigned(c);
		C.beSigned(c);
		A.execute(c);
		B.execute(c);
		B.execute(c);
		C.execute(c);
	} catch(const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << '\n';
	}

	return 0;
	
}
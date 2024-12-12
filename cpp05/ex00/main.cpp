#include "Bureaucrat.hpp"

int     main(void)
{
	try {
		Bureaucrat a("Lilien", 0);
	} catch(const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	try {
		Bureaucrat b("Yvann", 151);
	} catch(const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	try {
		Bureaucrat c("Chris", 5);
		std::cout << c << std::endl;
		c.incrementGrade();
		std::cout << c << std::endl;
		c.decrementGrade();
		std::cout << c << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	
	return 0;
	
}
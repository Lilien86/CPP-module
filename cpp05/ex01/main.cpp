#include "Bureaucrat.hpp"
#include "Form.hpp"

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


	try {
		Form f1("A1", 0, 3);
	} catch(const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	try {
		Form f2("A2", 151, 7);
	} catch(const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	try {
		Bureaucrat c("Chris", 5);
		Form f3("A3", 4, 3);
		std::cout << f3 << std::endl;
		f3.beSigned(c);
	} catch(const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << '\n';
	}

	return 0;
	
}
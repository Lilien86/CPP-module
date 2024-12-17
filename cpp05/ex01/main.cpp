#include "Bureaucrat.hpp"
#include "Form.hpp"

int     main(void)
{
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
		Bureaucrat c("-BOSS-Chris", 1);
		Bureaucrat d("-NOOB-otherChris", 125);
		Bureaucrat e("-MANAGER-litleChris", 5);
		Form f3("A3", 50, 50);
		Form f4("A3", 100, 100);
		std::cout << f3 << std::endl;
		c.signForm(f3);
		d.signForm(f4);
		e.signForm(f3);
	} catch(const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << '\n';
	}

	return 0;
	
}
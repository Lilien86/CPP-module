#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int     main(void)
{
	try {
		Bureaucrat c("-BOSS-Chris", 1);
		ShrubberyCreationForm A("Tarouk");
		RobotomyRequestForm	B("Romarin");
		PresidentialPardonForm	C("Edismoi");
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Romarin");
		delete rrf;
		rrf = someRandomIntern.makeForm("shrubbery request", "Tarouk");
		delete rrf;
		rrf = someRandomIntern.makeForm("presidential request", "Edismoi");
		delete rrf;
		rrf = someRandomIntern.makeForm("bloupbloup", "Edismoi");
		delete rrf;
	} catch(const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << '\n';
	}

	return 0;
}
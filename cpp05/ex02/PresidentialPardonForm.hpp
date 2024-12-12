#ifndef PRESIDENTIALPARDONFROM
#define PRESIDENTIALPARDONFROM

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &cpy);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

		void execute(Bureaucrat const &executor) const;
};

#endif
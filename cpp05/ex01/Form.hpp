#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"	

class Form
{
	private:
		const std::string _name;
		bool _isSigned;
		int	_signRequirement;
		int	_execRequirement;

	public:
		Form(const std::string &name, int signRequirement, int execRequirement);
		Form(const Form &cpy);
		~Form();

		Form		&operator=(const Form &rhs);
		void		beSigned(const Bureaucrat &b);
		int getExecRequirement() const;
		int getSignRequirement() const;
		const std::string &getName() const;

		class GradeTooHighException: public std::exception{
		public:
			virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
		public:
			virtual const char* what() const throw();
		};

};

std::ostream	&operator<<(std::ostream &o, const Form &rhs);

#endif
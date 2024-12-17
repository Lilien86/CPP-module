#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

const std::string C_RESET = "\033[0m";
const std::string C_BOLD = "\033[1m";
const std::string C_DIM = "\033[2m";
const std::string C_UNDERLINE = "\033[4m";
const std::string C_BLINK = "\033[5m";
const std::string C_BLACK = "\033[30m";
const std::string C_RED = "\033[31m";
const std::string C_GREEN = "\033[32m";
const std::string C_YELLOW = "\033[33m";
const std::string C_BLUE = "\033[34m";
const std::string C_MAGENTA = "\033[35m";
const std::string C_CYAN = "\033[36m";
const std::string C_WHITE = "\033[37m";

class Bureaucrat;

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

		class FormAlreadySigned: public std::exception{
		public:
			virtual const char* what() const throw();
		};

};

std::ostream	&operator<<(std::ostream &o, const Form &rhs);

#endif
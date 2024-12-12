#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <stdexcept>
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

class AForm
{
	private:
		const std::string _name;
		bool _isSigned;
		int	_signRequirement;
		int	_execRequirement;

	public:
		AForm(const std::string &name, int signRequirement, int execRequirement);
		AForm(const AForm &cpy);
		~AForm();

		AForm				&operator=(const AForm &rhs);
		void				beSigned(const Bureaucrat &b);
		virtual void 		execute(Bureaucrat const &executor) const = 0; //virtual function

		int					getExecRequirement() const;
		int					getSignRequirement() const;
		const std::string	&getName() const;
		bool				isSigned() const;

		class GradeTooHighException: public std::exception{
		public:
			virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
		public:
			virtual const char* what() const throw();
		};

		class FormNotSignedException : public std::exception{
		public:
			virtual const char *what() const throw();
		};

};

std::ostream	&operator<<(std::ostream &o, const AForm &rhs);

#endif
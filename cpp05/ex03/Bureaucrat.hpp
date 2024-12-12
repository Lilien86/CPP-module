#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	private :
		std::string _name;
		int _grade;
	public:
		Bureaucrat(const std::string &name, const int grade);
		Bureaucrat(const Bureaucrat &obj);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &rhs);
		std::string getName() const;
		int getGrade() const;
		void setGrade(int new_grade);

		void	incrementGrade();
		void	decrementGrade();

		class GradeTooHighException: public std::exception{
		public:
			virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
		public:
			virtual const char* what() const throw();
		};


};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif
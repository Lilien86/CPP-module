#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(const std::string &name, const int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
	else
		std::cout << "Bureaucrat " << this->_name << " is created" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{
	*this = cpy;
	std::cout << "Bureaucrat has also as name " << this->_name << " is created" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->_name << " is destroyed" << std::endl;
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::setGrade(int new_grade)
{
	this->_grade = new_grade;
	return ;
}

void	Bureaucrat::incrementGrade()
{
	setGrade(this->_grade - 1);
	return ;
}

void	Bureaucrat::decrementGrade()
{
	setGrade(this->_grade + 1);
	return ;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}

void	Bureaucrat::signForm(AForm &form)
{
	try {
		form.beSigned(*this);
		std::cout << C_GREEN << this->_name << " signed " << form.getName() << C_WHITE << std::endl;
	} catch (const std::exception &e) {
		std::cout << C_RED << this->_name << " couldn't sign " << form.getName() 
				  << " because " << e.what() << C_WHITE << std::endl;
	}
}
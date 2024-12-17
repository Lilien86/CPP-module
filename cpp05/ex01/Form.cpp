#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string &name, int signRequirement, int execRequirement): _name(name), _isSigned(false), _signRequirement(signRequirement), _execRequirement(execRequirement)
{
	if (signRequirement > 150 || execRequirement > 150)
		throw Form::GradeTooHighException();
	else if (signRequirement < 1 || execRequirement < 1)
		throw Form::GradeTooLowException();
	else
		std::cout << "Form " << this->_name << " is created" << std::endl;
	return ;
}

Form::Form(const Form &rhs)
{
	*this = rhs;
	std::cout << "Form has also as name " << this->_name << " is created" << std::endl;
	return ;
}

Form::~Form()
{
	std::cout << "Form " << this->_name << " is destroyed" << std::endl;
	return ;
}

Form &Form::operator=(const Form &rhs)
{
	this->_execRequirement = rhs._execRequirement;
	this->_signRequirement = rhs._signRequirement;
	return (*this);
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char *Form::FormAlreadySigned::what() const throw()
{
	return "Form is already signed";
}
void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->_signRequirement)
		throw Form::GradeTooHighException();
	if (this->_isSigned)
        throw Form::FormAlreadySigned();
	this->_isSigned = true;
	return ;
}


int	Form::getExecRequirement() const
{
	return this->_execRequirement;
}

int	Form::getSignRequirement() const
{
	return this->_signRequirement;
}


const std::string &Form::getName() const
{
	return this->_name;
}

std::ostream	&operator<<(std::ostream &o, const Form &rhs) {
	o << C_BLUE << rhs.getName() << " form"
	<< " sign requirement " << rhs.getSignRequirement()
	<< " and exec requirement " << rhs.getExecRequirement() << C_WHITE;
	return o;
}


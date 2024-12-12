#include "AForm.hpp"

AForm::AForm(const std::string &name, int signRequirement, int execRequirement): _name(name), _isSigned(false), _signRequirement(signRequirement), _execRequirement(execRequirement)
{
	if (signRequirement > 150 || execRequirement > 150)
		throw AForm::GradeTooHighException();
	else if (signRequirement < 1 || execRequirement < 1)
		throw AForm::GradeTooLowException();
	else
		std::cout << "AForm " << this->_name << " is created" << std::endl;
	return ;
}

AForm::AForm(const AForm &rhs)
{
	*this = rhs;
	std::cout << "AForm has also as name " << this->_name << " is created" << std::endl;
	return ;
}

AForm::~AForm()
{
	std::cout << "AForm " << this->_name << " is destroyed" << std::endl;
	return ;
}

AForm &AForm::operator=(const AForm &rhs)
{
	this->_execRequirement = rhs._execRequirement;
	this->_signRequirement = rhs._signRequirement;
	return (*this);
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "form is already signed";
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->_signRequirement)
		throw AForm::GradeTooHighException();
	this->_isSigned = true;
	return ;
}

int	AForm::getExecRequirement() const { return this->_execRequirement; }
int	AForm::getSignRequirement() const { return this->_signRequirement; }
const std::string &AForm::getName() const { return this->_name; }
bool AForm::isSigned() const { return _isSigned; }

std::ostream	&operator<<(std::ostream &o, const AForm &rhs) {
	o << C_BLUE << "AForm " << rhs.getName() << " ("
      << (rhs.isSigned() ? "Signed" : "Not Signed") << "), "
      << "Grade to sign: " << rhs.getSignRequirement() << ", "
      << "Grade to execute: " << rhs.getExecRequirement() << C_WHITE;
    return o;

}


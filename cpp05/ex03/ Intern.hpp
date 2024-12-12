#ifndef INTERN_HPP
#define INTERN_HPP


class Intern
{
	public:
		Intern();
		Intern(const Intern &cpy);
		~Intern();
		Intern &operator=(const Intern &rhs);

		AForm	*makeForm(const std::string formName, const std::string target);
}

#endif
#include "Base.hpp"

Base::~Base(){};

Base	*generate(void)
{
	int i = rand() % 3;
	if (i == 0)
		return new A;
	else if (i == 1)
		return new B;
	else
		return new C;
}

void	identify(Base *p)
{
	std::cout << "The pointer of " << p << " is ";
	if (dynamic_cast<A *>(p))
		std::cout << "A";
	else if (dynamic_cast<B *>(p))
		std::cout << "B";
	else if (dynamic_cast<C *>(p))
		std::cout << "C";
	else
		std::cout << "Unknow";
	std::cout << std::endl;
}

void identify(Base& p)
{
	std::cout << "The reference of " << &p <<  " is ";

	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A";
	}
	catch (const std::exception& e) {
		try {
			(void)dynamic_cast<B &>(p);
			std::cout << "B";
		}
		catch (const std::exception& e) {
			try {
				(void)dynamic_cast<C &>(p);
				std::cout << "C";
			}
			catch (const std::exception& e) {
				std::cout << "Unknown";
			}
		}
	}
	std::cout << std::endl;
}
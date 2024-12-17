#ifndef BASE_HPP
# define BASE_HPP

# include <cstdlib>
# include <ctime>
#include <iostream>
#include <stdint.h>
# include <exception>

# define CHAR_MIN		-128
# define CHAR_MAX		127

# define INT_MIN		-2147483648
# define INT_MAX		2147483647

# define FLOAT_MIN		-3.40282e+38
# define FLOAT_MAX		3.40282e+38

# define DOUBLE_MIN		-1.79769e+308
# define DOUBLE_MAX		1.79769e+308

class Base
{
	public:
		virtual ~Base();
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
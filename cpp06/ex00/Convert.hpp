#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <float.h>
#include <cstdlib>

# define INT_MIN		-2147483648
# define INT_MAX		2147483647

# define FLOAT_MIN		-3.40282e+38
# define FLOAT_MAX		3.40282e+38

# define DOUBLE_MIN		-1.79769e+308
# define DOUBLE_MAX		1.79769e+308

enum e_type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	UNKNOWN
};

class Convert
{
	private:
		char		_c;
		int			_i;
		float		_f;
		double		_d;
		
		std::string	_literal;

	public:
		Convert();
		Convert(const std::string &literal);
		Convert(const Convert &cpy);
		~Convert();
		Convert &operator=(const Convert &rhs);

		// Getters and Setters ***
		char	getChar();
		int		getInt();
		float	getFloat();
		double	getDouble();

		void	setChar(const char newC);
		void	setInt(const int newI);
		void	setFloat(const float newF);
		void	setDouble(const double newD);

		void	convertChar();
		void	convertInt();
		void	convertFloat();
		void	convertDouble();

		void	handleInput();

};

#endif
#include "ScalarConverter.hpp"
#include "Convert.hpp"

ScalarConverter::ScalarConverter()
{
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	(void)src;
	return ;
}

ScalarConverter::~ScalarConverter()
{
	return ;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &rhs)
{
	(void)rhs;
	return (*this);
}

void ScalarConverter::convert(const std::string &literal)
{
	Convert conv(literal);

	conv.handleInput();
	return ;
}
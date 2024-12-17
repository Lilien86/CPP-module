#include "Convert.hpp"

// Canonical Form   ***
Convert::Convert(): _literal("42")
{
	return ;
}

Convert::Convert(const std::string &literal): _literal(literal)
{
	return ;
}

Convert::~Convert() { return ; }

Convert::Convert(const Convert &cpy) {
	(void)cpy;
	return ;
}

Convert	&Convert::operator=(const Convert &rhs) {
	(void)rhs;
	return (*this);
}


// Getters
char Convert::getChar() {
		return _c;
	}

int Convert::getInt() {
	return _i;
}

float Convert::getFloat() {
	return _f;
}

double Convert::getDouble() {
	return _d;
}

// Setters
void Convert::setChar(const char newC) {
	_c = newC;
	return ;
}

void Convert::setInt(const int newI) {
	_i = newI;
	return ;
}

void Convert::setFloat(const float newF) {
	_f = newF;
	return ;
}

void Convert::setDouble(const double newD) {
	_d = newD;
	return ;
}


///////////////
// Convert ***
///////////////
void	Convert::convertChar()
{
	std::cout << "char: " << _literal[0] << std::endl;
	std::cout << "int: " << static_cast<int>(_literal[0]) << std::endl;
	std::cout << "float: " << std::fixed << static_cast<float>(_literal[0]) << "f" << std::endl;
	std::cout << "double: " << std::fixed << static_cast<double>(_literal[0]) << std::endl;
	return ;
}

void	Convert::convertInt()
{
	_i = atoi(_literal.c_str());

	if ((_i < 0 || _i > 127 ) || (_i < INT_MIN || _i > INT_MAX))
		std::cout << "char: impossible" << std::endl;
	else if (_i < 32 || _i == 127)
		std::cout << "char: non-displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(_i) << std::endl;
	std::cout << "int: " << _i << std::endl;
	std::cout << "float: " << std::fixed << static_cast<float>(_i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << static_cast<double>(_i) << std::endl;
	return ;

}

void	Convert::convertFloat()
{
	_f = atof(_literal.c_str());

	if ((_f < 0 || _f > 127) || (_f < FLOAT_MIN || _f > FLOAT_MAX))
		std::cout << "char: impossible" << std::endl;
	else if (_f < 32 || _f == 127)
		std::cout << "char: non-displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(_f) << "f" << std::endl;
	std::cout << "int: " << static_cast<int>(_f) << std::endl;
	std::cout << "float: " << std::fixed << _f << std::endl;
	std::cout << "double: " << std::fixed << static_cast<double>(_f) << std::endl;
	return ;
}

void	Convert::convertDouble()
{
	_d = strtod(_literal.c_str(), NULL);

	if ((_d < 0 || _d > 127) || (_d < DOUBLE_MIN || _d > DOUBLE_MAX))
		std::cout << "char: impossible" << std::endl;
	else if (_d < 32 || _d == 127)
		std::cout << "char: non-displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(_d) << std::endl;
	std::cout << "int: " << static_cast<int>(_d) << std::endl;
	std::cout << "float: " << std::fixed << static_cast<float>(_d) << "f" << std::endl;
	std::cout << "double: " << std::fixed << _d << std::endl;
	return ;
}

static void		specialCaseConvert()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
	return ;
}

static void		errorCaseConvert()
{
	std::cout << "char: error" << std::endl;
	std::cout << "int: error" << std::endl;
	std::cout << "float: error" << std::endl;
	std::cout << "double: error" << std::endl;
	return ;
}


////////////////////
// MainFunction ***
////////////////////
void	Convert::handleInput()
{
	if (_literal[_literal.length() - 1] == 'f')
	{
		unsigned int i = 0;

		while (i < _literal.length() - 1 && (std::isdigit(_literal[i]) || _literal[i] == '.' || _literal[i] == '-'))
			i++;
		if (i == _literal.length() - 1)
			convertFloat();
		else
			errorCaseConvert();
	}
	else if (_literal.find('.') != std::string::npos)
	{
		unsigned int i = 0;

		while (std::isdigit(_literal[i]) || _literal[i] == '.' || _literal[i] == '-')
			i++;
		if (i == _literal.length())
			convertFloat();
		else
			errorCaseConvert();
	}
	else if (std::isdigit(_literal[0]) || std::isdigit(_literal[1]))
	{
		unsigned int i = 0;

		while (std::isdigit(_literal[i]) || _literal[i] == '-')
			i++;
		if (i == _literal.length())
			convertInt();
		else
			errorCaseConvert();
	}
	else if (std::isprint(_literal[0]) && !std::isdigit(_literal[0]))
	{
		if (_literal.length() == 1)
			convertChar();
		else if ((_literal == "-inf" || _literal == "-inff")
			|| (_literal == "+inf" || _literal == "+inff") || (_literal == "nan" || _literal == "nanf"))
			specialCaseConvert();
		else
			errorCaseConvert();;
	}
	else
		errorCaseConvert();
	return ;
}
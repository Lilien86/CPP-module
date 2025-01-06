#include "easyfind.hpp"

const char *	NoValueException::what() const throw() {
	return "No value found";
}
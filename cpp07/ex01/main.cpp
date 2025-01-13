#include "iter.hpp"

int main()
{
	std::string array[] = {"hello", "world", "and", "goodbye", "!!!!!"};
	std::cout << "STRING: ";
	iter(array, 5, printValue<std::string>);
	std::cout << std::endl;

	char array2[] = {'1', '2', '3', '4', '5'};
	std::cout << "CHAR: ";
	iter(array2, 5, printValue<char>);
	std::cout << std::endl;

	return 0;
}
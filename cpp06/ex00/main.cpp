#include "ScalarConverter.hpp"
#include "Convert.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: Syntax is: ./ex00 [string]" << std::endl;
		return (0);
	}
    ScalarConverter::convert(std::string(av[1]));
	return 0;
}
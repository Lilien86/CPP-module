# include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	(void)argc; (void)argv;
	if (argc != 2) {
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		return 1;
	}
	BitcoinExchange exchange(static_cast<std::string>("data.csv"));
	std::cout << exchange;
}
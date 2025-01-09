#include "Span.hpp"

int		main(void)
{
	try {
		Span sp = Span(5);

		sp.addNumber(9);
		sp.addNumber(69);
		sp.addNumber(42);
		sp.addNumber(666);
		sp.addNumber(19);
		
		std::vector<int> vec;
		vec.push_back(45);
		vec.push_back(12);
		vec.push_back(6);
		vec.push_back(89);
		vec.push_back(100);
		sp.addRange(vec.begin(), vec.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << sp << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "error: " << e.what() << '\n';
	}
	return 0;
}
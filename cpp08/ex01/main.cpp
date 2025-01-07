#include "Span.hpp"

int		main(void)
{
	Span sp = Span( 5 );

	sp.addNumber(9);
	sp.addNumber(69);
	sp.addNumber(42);
	sp.addNumber(666);
	sp.addNumber(19);
	

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << sp << std::endl;
	return 0;
}
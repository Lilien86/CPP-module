#ifndef SPAN_CPP
#define SPAN_CPP

#include <algorithm>
#include <vector>
#include <iostream>
#include <exception>

class Span
{
	private:
		Span();

		std::vector<int>	_list;
		unsigned int	_size;

	public:
		Span(const int size);
		Span(const Span &cpy);
		~Span();

		Span &operator=(const Span &rhs);

		const std::vector< int >* getList() const;

		void	addNumber(const int value);
		void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

		class OutOfList : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "List is full";
				}
		};

		class TooSmall : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "List is to small";
				}
		};
};

std::ostream& operator<<( std::ostream&, const Span& );

#endif
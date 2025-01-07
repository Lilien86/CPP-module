#ifndef SPAN_CPP
#define SPAN_CPP

#include <iostream>
#include <exception>

class Span
{
	private:
		Span();

		std::list<int>	_list;
		unsigned int	_size;

	public:
		Span(const int size);
		Span(const Span &cpy);
		~Span();

		Span &operator=(const Span &rhs);

		const std::list< int >* getList();
		getSize();

		void	addNumber(const int value);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

		class OutOfList : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "List is Full";
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

#endif
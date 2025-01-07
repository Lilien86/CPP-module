#include "Span.hpp"

Span::Span(): _size(0) {
	return ;
}

Span::~Span() {
	return ;
}

Span::Span(const int value): _size(value) {
	return ;
}

Span::Span(const Span &cpy) {
	*this = cpy;
}

Span	&Span::operator=(const Span &rhs) {
	 if ( this != &rhs ) {
		this->_n = rhs._n;
		this->_list = rhs._list;
	}
	return *this;
}





const std::list< int >* Span::getList( void ) const {
	return &_list;
}






void	Span::addNumber(const int value) {
	if (this->_list.size() > _size)
		throw OutOfList();
	_list.push_back( n );
}

unsigned int	Span::longestSpan() const {
	if ( _list.size() < 2 )
		throw TooSmall();
	return (*std::max_element(_list.begin(), _list.end() ) - *std::min_element( _list.begin(), _list.end()));
}

unsigned int	Span::shortestSpan() const{
	if (nums.size() < 2)
		throw TooSmall();
}
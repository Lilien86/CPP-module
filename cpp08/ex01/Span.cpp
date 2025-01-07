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
		this->_size = rhs._size;
		this->_list = rhs._list;
	}
	return *this;
}





const std::vector< int >* Span::getList( void ) const {
	return &_list;
}






void	Span::addNumber(const int value) {
	if (this->_list.size() > _size)
		throw OutOfList();
	_list.push_back(value);
}

void	Span::addNumber(std::vector<int> &numbers) {
	if (_list.size() + numbers.size() > max)
		throw Span::SpanFullException();
	_list.insert(_list.end(), numbers.begin(), numbers.end());
}

unsigned int	Span::longestSpan() const {
	if (_list.size() < 2 )
		throw TooSmall();
	return (*std::max_element(_list.begin(), _list.end() ) - *std::min_element( _list.begin(), _list.end()));
}

unsigned int	Span::shortestSpan() const{
	if (_list.size() < 2)
		throw TooSmall();

	std::vector<int>	tmp = _list;
	std::sort(tmp.begin(), tmp.end());

	int	min = tmp[1] - tmp[0];
	for (unsigned int i = 1; i < tmp.size() - 1; i++) {
		if (tmp[i + 1] - tmp[i] < min)
			min = tmp[i + 1] - tmp[i];
	}
	return min;
}


std::ostream& operator<<(std::ostream& os, const Span& span) {
	std::vector<int>::const_iterator i;
	for (i = span.getList()->begin(); i != span.getList()->end(); ++i)
		os << *i << " ";
	return os;
}
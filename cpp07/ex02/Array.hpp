#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
    public:
        Array();
        Array(unsigned int size);
        ~Array();
        Array(const Array &cpy);
        
        Array &	operator=(Array const &rhs);
        T		operator[](size_t size) const;
		T &		operator[](size_t size);

        size_t size() const;
        class OutOfArray : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

    private:
		T *	_array;
		size_t	_size;
};

#endif
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>

class NoFoundValue : public std::exception
{
    public:
        virtual const char* what() const throw();
};

template<typename T>
int easyFind(T const & array, int nb);

#endif
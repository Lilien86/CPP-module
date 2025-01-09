#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, size_t length, void (*func)(const T &)) {
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
    return ;
}

template <typename T>
void	printValue(const T &val)
{
	std::cout << val << ", ";
    return ;
}

#endif
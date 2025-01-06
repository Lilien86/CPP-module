#include "Array.hpp"

template <class T>
Array<T>::Array() : _array(new T[0]), _size(0)
{
    return ;
}

template <class T>
Array<T>::~Array()
{
    delete [] this->_array;
    return ;
}

template <class T>
Array<T>::Array(const Array &cpy)
{
    *this = cpy;
    return ;
}

template <class T>
Array<T>::Array(unsigned int size): _array(new T[size]), _size(size)
{
	for (unsigned int i = 0; i < size; i++)
		this->_array[i] = 0;
    return ;
}

template <class T>
Array<T> &     Array<T>::operator=(Array<T> const &rhs)
{
    if (this != &rhs)
    {
        delete [] this->_array;
        this->_array = new T[rhs._size];
        this->_size = rhs._size;
        for (size_t i = 0; i < this->_size; i++)
            this->_array[i] = rhs[i];
    }
    return (*this);
}

template <class T>
const char *    Array<T>::OutOfArray::what() const throw()
{
    return "Value is out of the Array";
}

template <class T>
T   Array<T>::operator[](size_t i) const
{
    T   shadow;
    if (i > this->_size)
        throw OutOfArray();
    shadow = this->_array[i];
	return shadow;
}

template <class T>
T   &Array<T>::operator[](size_t i)
{
    if (i > this->_size)
        throw OutOfArray();
    return (this->_array[i]);
}

template<typename T>
size_t		Array<T>::size() const {
	return this->_size;
}
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>

class NoFoundValue : public std::exception
{
    public:
        virtual const char* what() const throw() {
            return "No value found";
        }
};

template<typename T>
typename T::iterator easyfind(T & array, int nb)
{
	typename T::iterator it = array.begin();
	typename T::iterator it_end = array.end();

	typename T::iterator isfound = std::find(it, it_end, nb);

	if (isfound == it_end)
		throw NoFoundValue();
	return isfound;
}

#endif
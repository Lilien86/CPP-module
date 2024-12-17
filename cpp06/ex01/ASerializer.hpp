#ifndef ASERIALIZER_HPP
# define ASERIALIZER_HPP

#include <iostream>
# include <stdint.h>

struct Data
{
	int		value;
};

class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer &cpy);
		Serializer &operator=(const Serializer &rhs);
		~Serializer();

		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);

};

#endif
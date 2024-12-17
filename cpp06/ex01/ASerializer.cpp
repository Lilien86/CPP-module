#include "ASerializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer is created" << std::endl;
	return;
}

Serializer::Serializer(const Serializer &cpy)
{
	*this = cpy;
	std::cout << "Serializer is created" << std::endl;
	return ;
}

Serializer::~Serializer()
{
	std::cout << "Serializer is destroyed" << std::endl;
	return;
}

Serializer &Serializer::operator=(const Serializer &rhs)
{
	(void)rhs;
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
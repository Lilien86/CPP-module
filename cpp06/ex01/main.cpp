#include "ASerializer.hpp"

int main()
{
	Serializer *Ser = NULL;
	Data originalData = {42};
	std::cout << "Original Data address: " << &originalData << std::endl;
	std::cout << "Original Data value: " << originalData.value << std::endl;

	uintptr_t	raw = Ser->serialize(&originalData);
	std::cout << std::endl;
	std::cout << "Raw: " << raw << std::endl;
	std::cout << std::endl;

	Data *NewData = Ser->deserialize(raw);
	std::cout << "New Data address: " << &NewData << std::endl;
	std::cout << "New data value: " << NewData->value << std::endl;
	return 0;
}
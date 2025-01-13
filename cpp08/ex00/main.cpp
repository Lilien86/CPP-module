#include "easyfind.hpp"

int main()
{
	std::vector<int> intVector(25);
	
	std::cout << "intVector: ";
	for (size_t i = 0; i < intVector.size(); i++)
	{
		intVector[i] = i + i;
		std::cout << intVector[i] << " ";
	}
		
	std::cout << std::endl << std::endl;

	try {
		std::vector<int>::iterator	it = easyfind(intVector, static_cast<int>(22));
		size_t						pos = it - intVector.begin();

		std::cout << "Found at position: " << pos << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
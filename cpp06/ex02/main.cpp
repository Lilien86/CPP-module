#include "Base.hpp"

int	main(void)
{
	srand(time(NULL)); //seed

	for (int i = 0; i < 5; i++)
	{
		Base	*base = generate();
		identify(*base);
		identify(base);
		std::cout << std::endl;
		std::cout << std::endl;
		delete (base);
	}
	return (0);
}
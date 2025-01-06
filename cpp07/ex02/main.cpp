#include "Array.cpp"

int main()
{
    Array<int> arr(15);

    try {
        for (int i = 0; static_cast<size_t>(i) < arr.size(); i++)
            std::cout << i << " value = " << arr[i] << "adress = " << &arr <<std::endl;
        std::cout << arr[arr.size() + 1];
    } catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
	}

    Array<int> second_arr;
    second_arr = arr;
    try {
        for (int i = 0; static_cast<size_t>(i) < second_arr.size(); i++)
            std::cout << i << " value = " << second_arr[i] << "adress = " << &second_arr << std::endl;
        std::cout << second_arr[second_arr.size() + 1];
    } catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
	}
    return 0;
}
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <sstream>
#include <ctime>
#include <iterator> // For std::advance

template <typename Container>
bool find_duplicate(const Container &nums, int new_value)
{
	for (typename Container::const_iterator it = nums.begin(); it != nums.end(); ++it)
	{
		if (*it == new_value)
			return true;
	}
	return false;
}

template <typename Container>
void insertionSort(Container &nums)
{
	typename Container::iterator it, j;
	for (it = nums.begin(); it != nums.end(); ++it) {
		j = it;

		while (j != nums.begin()) {
			typename Container::iterator prev = j;
			--prev;
			if (*j < *prev) {
				std::swap(*j, *prev);
			} else {
				break;
			}
			--j;
		}
	}
}

template <typename Container>
void fordJohnsonMergeInsertSort(Container &nums)
{
	if (nums.size() <= 3) {
		insertionSort(nums);
		return;
	}

	typename Container::iterator mid = nums.begin();
	std::advance(mid, nums.size() / 2); // Advance to the middle of the container

	// Split into left and right halves
	Container left(nums.begin(), mid);
	Container right(mid, nums.end());

	// Recursive sorting on both halves
	fordJohnsonMergeInsertSort(left);
	fordJohnsonMergeInsertSort(right);

	// Merge sorted halves
	typename Container::iterator leftIt = left.begin();
	typename Container::iterator rightIt = right.begin();
	typename Container::iterator numsIt = nums.begin();

	while (leftIt != left.end() && rightIt != right.end()) {
		if (*leftIt < *rightIt)
			*numsIt++ = *leftIt++;
		else
			*numsIt++ = *rightIt++;
	}

	while (leftIt != left.end()) {
		*numsIt++ = *leftIt++;
	}
	while (rightIt != right.end()) {
		*numsIt++ = *rightIt++;
	}
}

template <typename Container>
Container build_container(const char **args)
{
	Container container;
	for (int i = 0; args[i]; ++i)
	{
		int input;
		std::stringstream ss(args[i]);
		ss >> input;
		if (ss.fail())
			throw -42;
		if (find_duplicate(container, input) || input < 0)
			throw -42;
		container.push_back(input);
	}
	return container;
}


std::ostream &operator<<(std::ostream &os, const std::vector<int> &container);

std::ostream &operator<<(std::ostream &os, const std::list<int> &container);

#endif

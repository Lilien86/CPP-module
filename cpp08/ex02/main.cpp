#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top element: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Stack size after pop: " << mstack.size() << std::endl << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Iterating through stack:" << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	
	// Test 3: Copy constructor
	MutantStack<int> copy_stack(mstack);
	std::cout << "Copy constructor - Top element of copied stack: " << copy_stack.top() << std::endl;
	
	// Test 4: Assignment operator
	MutantStack<int> assigned_stack;
	assigned_stack = mstack;
	std::cout << "Assigned stack - Top element after assignment: " << assigned_stack.top() << std::endl;
	
	// Test 5: Check if the stack is empty
	std::cout << "Is stack empty? " << (mstack.empty() ? "Yes" : "No") << std::endl;
	
	// Test 6: Clear stack and check if empty
	while (!mstack.empty()) {
		mstack.pop();
	}
	std::cout << "Is stack empty after popping all elements? " << (mstack.empty() ? "Yes" : "No") << std::endl;
	
	// Test 7: Create a new stack and verify it is empty
	MutantStack<int> empty_stack;
	std::cout << "New stack - Is empty? " << (empty_stack.empty() ? "Yes" : "No") << std::endl;

	// Test 8: Copy from an empty stack
	MutantStack<int> copy_empty_stack(empty_stack);
	std::cout << "Copy of empty stack - Is empty? " << (copy_empty_stack.empty() ? "Yes" : "No") << std::endl;

	return 0;
}

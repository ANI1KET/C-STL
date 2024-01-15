// size_stack.cpp

// size() - Returns the number of elements in the stack.

#include <iostream>
#include <stack>

int main()
{
    std::stack<int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);

    std::cout << "Size of stack: " << numbers.size() << std::endl;

    return 0;
}

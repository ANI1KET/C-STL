// push_stack.cpp

// push(value) - Pushes an element onto the top of the stack.

#include <iostream>
#include <stack>

int main()
{
    std::stack<int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);

    std::cout << "Stack after push: ";
    while (!numbers.empty())
    {
        std::cout << numbers.top() << " ";
        numbers.pop();
    }
    std::cout << std::endl;

    return 0;
}

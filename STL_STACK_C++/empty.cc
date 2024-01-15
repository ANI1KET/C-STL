// empty_stack.cpp

// empty() - Returns true if the stack is empty, false otherwise.

#include <iostream>
#include <stack>

int main()
{
    std::stack<int> numbers;

    if (numbers.empty())
    {
        std::cout << "Stack is empty." << std::endl;
    }
    else
    {
        std::cout << "Stack is not empty." << std::endl;
    }

    return 0;
}

// pop_stack.cpp

// pop() - Removes the top element from the stack.

#include <iostream>
#include <stack>

int main()
{
    std::stack<int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);

    std::cout << "Stack before pop: ";
    while (!numbers.empty())
    {
        std::cout << numbers.top() << " ";
        numbers.pop();
    }
    std::cout << std::endl;

    std::cout << "Stack after pop: ";
    if (numbers.empty())
    {
        std::cout << "Stack is empty.";
    }
    else
    {
        std::cout << "Top element: " << numbers.top();
    }
    std::cout << std::endl;

    return 0;
}

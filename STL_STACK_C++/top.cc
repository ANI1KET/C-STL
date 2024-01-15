// top_stack.cpp

// top() - Returns a reference to the top element of the stack.

#include <iostream>
#include <stack>

int main()
{
    std::stack<int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);

    if (!numbers.empty())
    {
        int top_element = numbers.top();
        std::cout << "Top element: " << top_element << std::endl;
    }
    else
    {
        std::cout << "Stack is empty." << std::endl;
    }

    return 0;
}

// swap_stack.cpp

// swap(other_stack) - Swaps the contents of two stacks.

#include <iostream>
#include <stack>

int main()
{
    std::stack<int> numbers1;
    numbers1.push(1);
    numbers1.push(2);
    numbers1.push(3);

    std::stack<int> numbers2;
    numbers2.push(4);
    numbers2.push(5);
    numbers2.push(6);

    numbers1.swap(numbers2);

    std::cout << "Stack 1 after swap: ";
    while (!numbers1.empty())
    {
        std::cout << numbers1.top() << " ";
        numbers1.pop();
    }
    std::cout << std::endl;

    std::cout << "Stack 2 after swap: ";
    while (!numbers2.empty())
    {
        std::cout << numbers2.top() << " ";
        numbers2.pop();
    }
    std::cout << std::endl;

    return 0;
}

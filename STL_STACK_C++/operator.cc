// operator_not_equal_stack.cpp

// operator== - Checks if two stacks are equal.

#include <iostream>
#include <stack>

int main()
{
    std::stack<int> stack1, stack2;

    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    stack2.push(4);
    stack2.push(5);
    stack2.push(6);

    bool areNotEqual = (stack1 != stack2);

    std::cout << "Are stacks not equal? " << (areNotEqual ? "Yes" : "No") << std::endl;

    return 0;
}

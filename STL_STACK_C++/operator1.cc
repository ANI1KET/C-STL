// operator_equal_stack.cpp

// operator!= - Checks if two stacks are not equal.

#include <iostream>
#include <stack>

int main()
{
    std::stack<int> stack1, stack2;

    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    stack2.push(1);
    stack2.push(2);
    stack2.push(3);

    bool areEqual = (stack1 == stack2);

    std::cout << "Are stacks equal? " << (areEqual ? "Yes" : "No") << std::endl;

    return 0;
}

// emplace_stack.cpp

// emplace(value) - Constructs an element in-place and pushes it onto the stack.

#include <iostream>
#include <stack>

class MyClass
{
public:
    MyClass(int val) : value(val)
    {
        std::cout << "Constructing MyClass with value " << value << std::endl;
    }

private:
    int value;
};

int main()
{
    std::stack<MyClass> objects;

    objects.emplace(1);
    objects.emplace(2);

    std::cout << "Emplace example" << std::endl;

    return 0;
}

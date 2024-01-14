// emplace_back_deque.cpp

// emplace_back(value) - Constructs an element in-place at the end of the deque.

#include <iostream>
#include <deque>

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
    std::deque<MyClass> objects;

    objects.emplace_back(1);
    objects.emplace_back(2);

    std::cout << "Emplace_back example" << std::endl;

    return 0;
}

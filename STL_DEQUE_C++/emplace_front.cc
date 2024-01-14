// emplace_front_deque.cpp

// emplace_front(value) - Constructs an element in-place at the beginning of the deque.

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

    objects.emplace_front(1);
    objects.emplace_front(2);

    std::cout << "Emplace_front example" << std::endl;

    return 0;
}

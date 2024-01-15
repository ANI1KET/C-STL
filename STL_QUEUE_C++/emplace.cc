// emplace_queue.cpp

// emplace(value) - Constructs an element in-place and pushes it onto the back of the queue.

#include <iostream>
#include <queue>

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
    std::queue<MyClass> objects;

    objects.emplace(1);
    objects.emplace(2);

    std::cout << "Emplace example" << std::endl;

    return 0;
}

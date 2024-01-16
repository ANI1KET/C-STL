// emplace_back.cpp

// emplace_back(args...) - Constructs and adds an element to the end.

#include <iostream>
#include <vector>

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
    std::vector<MyClass> objects;

    objects.emplace_back(1);
    objects.emplace_back(2);

    std::cout << "Emplace_back example" << std::endl;

    return 0;
}

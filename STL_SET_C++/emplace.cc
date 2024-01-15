// emplace_set.cpp

// emplace(value): Inserts a new element into the set using the value.

#include <iostream>
#include <set>

class MyClass
{
public:
    int value;

    MyClass(int v) : value(v) {}

    // For ordering in set
    bool operator<(const MyClass &other) const
    {
        return value < other.value;
    }
};

int main()
{
    std::set<MyClass> mySet;

    mySet.emplace(5); // Insert new element using value
    mySet.emplace(10);
    mySet.emplace(3);

    std::cout << "Set elements after emplace: ";
    for (const MyClass &obj : mySet)
    {
        std::cout << obj.value << " ";
    }
    std::cout << std::endl;

    return 0;
}

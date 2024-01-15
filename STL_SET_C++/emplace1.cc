// emplace_val1_val2_set.cpp

// emplace(val1, val2): Inserts a new element constructed from val1 and val2.

#include <iostream>
#include <set>

class MyClass
{
public:
    int value1;
    int value2;

    MyClass(int v1, int v2) : value1(v1), value2(v2) {}

    // For ordering in set
    bool operator<(const MyClass &other) const
    {
        return value1 < other.value1;
    }
};

int main()
{
    std::set<MyClass> mySet;

    mySet.emplace(5, 100); // Insert new element constructed from values
    mySet.emplace(10, 200);
    mySet.emplace(3, 50);

    std::cout << "Set elements after emplace(val1, val2): ";
    for (const MyClass &obj : mySet)
    {
        std::cout << "(" << obj.value1 << ", " << obj.value2 << ") ";
    }
    std::cout << std::endl;

    return 0;
}

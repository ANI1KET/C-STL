// erase_set.cpp

// erase(value): Removes the element with the specified value from the set.

#include <iostream>
#include <set>

int main()
{
    std::set<int> mySet;

    mySet.insert(5);
    mySet.insert(10);
    mySet.insert(3);

    mySet.erase(10); // Remove element with value 10

    std::cout << "Set elements after erase: ";
    for (int num : mySet)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// clear_set.cpp

// clear(): Removes all elements from the set.

#include <iostream>
#include <set>

int main()
{
    std::set<int> mySet;

    mySet.insert(5);
    mySet.insert(10);
    mySet.insert(3);

    mySet.clear(); // Remove all elements from the set

    std::cout << "Size of the set after clear: " << mySet.size() << std::endl;

    return 0;
}

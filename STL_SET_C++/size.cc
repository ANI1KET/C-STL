// size_set.cpp

// size(): Returns the number of elements in the set.

#include <iostream>
#include <set>

int main()
{
    std::set<int> mySet;

    mySet.insert(5);
    mySet.insert(10);
    mySet.insert(3);

    std::cout << "Size of the set: " << mySet.size() << std::endl;

    return 0;
}

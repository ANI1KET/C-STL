// empty_set.cpp

// empty(): Checks if the set is empty.

#include <iostream>
#include <set>

int main()
{
    std::set<int> mySet;

    std::cout << "Is the set empty? " << (mySet.empty() ? "Yes" : "No") << std::endl;

    mySet.insert(5);

    std::cout << "Is the set empty after insertion? " << (mySet.empty() ? "Yes" : "No") << std::endl;

    return 0;
}

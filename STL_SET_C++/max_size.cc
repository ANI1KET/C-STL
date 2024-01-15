// max_size_set.cpp

// max_size(): Returns the maximum number of elements the set can hold.

#include <iostream>
#include <set>

int main()
{
    std::set<int> mySet;

    std::cout << "Maximum number of elements the set can hold: " << mySet.max_size() << std::endl;

    return 0;
}

// find_set.cpp

// find(value): Searches for an element with the given value in the set.

#include <iostream>
#include <set>

int main()
{
    std::set<int> mySet;

    mySet.insert(5);
    mySet.insert(10);
    mySet.insert(3);

    std::set<int>::iterator it = mySet.find(10); // Find element with value 10

    if (it != mySet.end())
    {
        std::cout << "Element " << *it << " found in the set." << std::endl;
    }
    else
    {
        std::cout << "Element not found in the set." << std::endl;
    }

    return 0;
}

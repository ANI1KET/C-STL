// lower_bound_set.cpp

// lower_bound(value): Returns an iterator pointing to the first element not less than the given value.

#include <iostream>
#include <set>

int main()
{
    std::set<int> mySet;

    mySet.insert(5);
    mySet.insert(10);
    mySet.insert(15);
    mySet.insert(20);

    std::set<int>::iterator it = mySet.lower_bound(12); // Find first element not less than 12

    if (it != mySet.end())
    {
        std::cout << "Element " << *it << " found in the set." << std::endl;
    }
    else
    {
        std::cout << "No element not less than 12 found in the set." << std::endl;
    }

    return 0;
}

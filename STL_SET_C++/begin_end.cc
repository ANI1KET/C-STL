// begin_end_set.cpp

// begin(), end(): Returns iterators pointing to the beginning and end of the set.

#include <iostream>
#include <set>

int main()
{
    std::set<int> mySet;

    mySet.insert(5);
    mySet.insert(10);
    mySet.insert(3);

    std::cout << "Set elements using iterators: ";
    for (std::set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

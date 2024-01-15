// iterators_set.cpp

// begin(), end(), rbegin(), rend(): Iterators for traversing the set.

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

    std::cout << "Set elements using reverse iterators: ";
    for (std::set<int>::reverse_iterator rit = mySet.rbegin(); rit != mySet.rend(); ++rit)
    {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    return 0;
}

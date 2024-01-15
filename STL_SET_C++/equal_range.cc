// equal_range_set.cpp

// equal_range(value): Returns a pair of iterators denoting the range of elements with the given value.

#include <iostream>
#include <set>

int main()
{
    std::set<int> mySet;

    mySet.insert(5);
    mySet.insert(10);
    mySet.insert(15);
    mySet.insert(20);

    std::pair<std::set<int>::iterator, std::set<int>::iterator> range = mySet.equal_range(10); // Find range of elements with value 10

    std::cout << "Elements in the range: ";
    for (std::set<int>::iterator it = range.first; it != range.second; ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

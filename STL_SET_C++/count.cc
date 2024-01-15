// count_set.cpp

// count(value): Returns the number of elements with the specified value in the set.

#include <iostream>
#include <set>

int main()
{
    std::set<int> mySet;

    mySet.insert(5);
    mySet.insert(10);
    mySet.insert(5);
    mySet.insert(3);

    int count = mySet.count(5); // Count the occurrences of value 5

    std::cout << "Number of occurrences of 5 in the set: " << count << std::endl;

    return 0;
}

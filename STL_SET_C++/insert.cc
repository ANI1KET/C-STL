// insert_set.cpp

// insert(value): Inserts the given value into the set.

#include <iostream>
#include <set>

int main()
{
    std::set<int> mySet;

    mySet.insert(5);
    mySet.insert(10);
    mySet.insert(3);

    std::cout << "Set elements after insert: ";
    for (int num : mySet)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// empty_list.cpp

// empty(): Checks if the list is empty.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    std::cout << "Is the list empty? " << (myList.empty() ? "Yes" : "No") << std::endl;

    myList.push_back(5);

    std::cout << "Is the list empty now? " << (myList.empty() ? "Yes" : "No") << std::endl;

    return 0;
}

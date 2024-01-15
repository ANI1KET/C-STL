// size_list.cpp

// size(): Returns the number of elements in the list.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    myList.push_back(5);
    myList.push_back(10);
    myList.push_back(3);

    std::cout << "Size of the list: " << myList.size() << std::endl;

    return 0;
}

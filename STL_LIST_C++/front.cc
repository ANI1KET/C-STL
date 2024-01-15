// front_list.cpp

// front(): Returns a reference to the first element.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    myList.push_back(5);
    myList.push_back(10);
    myList.push_back(3);

    int firstElement = myList.front();

    std::cout << "First element of the list: " << firstElement << std::endl;

    return 0;
}

// back_list.cpp

// back(): Returns a reference to the last element.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    myList.push_back(5);
    myList.push_back(10);
    myList.push_back(3);

    int lastElement = myList.back();

    std::cout << "Last element of the list: " << lastElement << std::endl;

    return 0;
}

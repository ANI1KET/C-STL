// push_back_list.cpp

// push_back(value): Inserts an element at the end of the list.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    myList.push_back(5);
    myList.push_back(10);
    myList.push_back(3);

    std::cout << "List after push_back: ";
    for (int num : myList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// push_front_list.cpp

// push_front(value): Inserts an element at the beginning of the list.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    myList.push_front(5);
    myList.push_front(10);
    myList.push_front(3);

    std::cout << "List after push_front: ";
    for (int num : myList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

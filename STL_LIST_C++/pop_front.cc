// pop_front_list.cpp

// pop_front(): Removes the first element from the list.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    myList.push_back(5);
    myList.push_back(10);
    myList.push_back(3);

    myList.pop_front(); // Remove the first element

    std::cout << "List after pop_front: ";
    for (int num : myList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

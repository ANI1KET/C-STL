// clear_list.cpp

// clear(): Removes all elements from the list.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    myList.push_back(5);
    myList.push_back(10);
    myList.push_back(3);

    myList.clear(); // Clear all elements

    std::cout << "List after clear: ";
    for (int num : myList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

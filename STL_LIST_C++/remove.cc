// remove_list.cpp

// remove(value): Removes all elements with the specified value from the list.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    myList.push_back(5);
    myList.push_back(10);
    myList.push_back(5);
    myList.push_back(3);

    myList.remove(5); // Remove all elements with value 5

    std::cout << "List after remove: ";
    for (int num : myList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

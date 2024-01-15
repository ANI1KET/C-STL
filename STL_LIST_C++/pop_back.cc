// pop_back_list.cpp

// pop_back(): Removes the last element from the list.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    myList.push_back(5);
    myList.push_back(10);
    myList.push_back(3);

    myList.pop_back(); // Remove the last element

    std::cout << "List after pop_back: ";
    for (int num : myList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

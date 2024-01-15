// sort_list.cpp

// sort(): Sorts the elements in the list in ascending order.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;
    myList.push_back(5);
    myList.push_back(2);
    myList.push_back(8);
    myList.push_back(1);

    myList.sort(); // Sort the list

    std::cout << "Sorted list: ";
    for (int num : myList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

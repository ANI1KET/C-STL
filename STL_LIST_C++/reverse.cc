// reverse_list.cpp

// reverse(): Reverses the order of elements in the list.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;
    myList.push_back(5);
    myList.push_back(2);
    myList.push_back(8);
    myList.push_back(1);

    myList.reverse(); // Reverse the list

    std::cout << "Reversed list: ";
    for (int num : myList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

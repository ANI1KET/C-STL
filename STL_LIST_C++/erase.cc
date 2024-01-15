// erase_list.cpp

// erase(position): Removes an element at the specified position.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    myList.push_back(5);
    myList.push_back(10);
    myList.push_back(3);

    std::list<int>::iterator it = myList.begin();
    std::advance(it, 1); // Advance iterator to the desired position
    myList.erase(it);    // Erase element at position 1

    std::cout << "List after erase: ";
    for (int num : myList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

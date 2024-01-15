// resize_list.cpp

// resize(new_size): Changes the size of the list.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    myList.push_back(5);
    myList.push_back(10);
    myList.push_back(3);

    myList.resize(5); // Resize the list to contain 5 elements

    std::cout << "List after resize: ";
    for (int num : myList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

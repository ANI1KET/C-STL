// insert_list.cpp

// insert(position, value): Inserts an element at the specified position.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    myList.push_back(5);
    myList.push_back(10);
    myList.push_back(3);

    // Insert element at position
    std::list<int>::iterator it = myList.begin();
    std::advance(it, 1);  // Advance iterator to the desired position
    myList.insert(it, 7); // Insert at position 1

    std::cout << "List after insert: ";
    for (int num : myList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

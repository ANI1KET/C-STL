// unique_list.cpp

// unique(): Removes consecutive duplicate elements from the list.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;
    myList.push_back(5);
    myList.push_back(2);
    myList.push_back(2);
    myList.push_back(8);
    myList.push_back(8);
    myList.push_back(1);

    myList.unique(); // Remove consecutive duplicates

    std::cout << "List after removing consecutive duplicates: ";
    for (int num : myList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

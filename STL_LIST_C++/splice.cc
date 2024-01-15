// splice_list.cpp

// splice(position, other): Moves elements from another list to the specified position.

#include <iostream>
#include <list>

int main()
{
    std::list<int> list1;
    list1.push_back(1);
    list1.push_back(2);

    std::list<int> list2;
    list2.push_back(3);
    list2.push_back(4);

    std::list<int>::iterator it = list1.begin();
    std::advance(it, 1); // Advance iterator to the desired position

    list1.splice(it, list2); // Move elements from list2 to list1 at position 1

    std::cout << "List 1 after splice: ";
    for (int num : list1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "List 2 after splice: ";
    for (int num : list2)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

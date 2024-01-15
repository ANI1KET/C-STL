// swap_list.cpp

// swap(other): Swaps the contents of two lists.

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

    list1.swap(list2); // Swap the contents of list1 and list2

    std::cout << "List 1 after swap: ";
    for (int num : list1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "List 2 after swap: ";
    for (int num : list2)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// merge_list.cpp

// merge(other): Merges two sorted lists into one sorted list.

#include <iostream>
#include <list>

int main()
{
    std::list<int> list1;
    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(5);

    std::list<int> list2;
    list2.push_back(2);
    list2.push_back(4);
    list2.push_back(6);

    list1.merge(list2); // Merge the two sorted lists

    std::cout << "Merged list: ";
    for (int num : list1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

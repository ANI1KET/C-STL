// merge_forward_list.cpp

// merge(other): Merges elements from another forward list, assuming both lists are sorted.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> list1 = {1, 3, 5};
    std::forward_list<int> list2 = {2, 4, 6};

    list1.merge(list2);

    std::cout << "List 1 after merge with list 2:" << std::endl;
    for (int num : list1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

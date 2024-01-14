// splice_after_single_element_forward_list.cpp

// splice_after(position, other, it): Moves a single element from another forward list after the specified position.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> list1 = {1, 2, 3};
    std::forward_list<int> list2 = {4, 5, 6};

    auto it1 = list1.begin();
    ++it1; // Move to the second element

    auto it2 = list2.begin();
    ++it2; // Move to the second element of list2

    list1.splice_after(it1, list2, it2);

    std::cout << "List 1 after splice_after with single element:" << std::endl;
    for (int num : list1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

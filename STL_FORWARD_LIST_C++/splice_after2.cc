// splice_after_range_forward_list.cpp

// splice_after(position, other, first, last): Moves elements from another forward list within the specified range after the position.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> list1 = {1, 2, 3};
    std::forward_list<int> list2 = {4, 5, 6};

    auto it1 = list1.begin();
    ++it1; // Move to the second element

    auto it2_first = list2.begin();
    ++it2_first; // Move to the second element of list2
    auto it2_last = it2_first;
    ++it2_last; // Move to the third element of list2

    list1.splice_after(it1, list2, it2_first, it2_last);

    std::cout << "List 1 after splice_after with range:" << std::endl;
    for (int num : list1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

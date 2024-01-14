// splice_after_forward_list.cpp

// splice_after(position, other): Moves elements from another forward list after the specified position.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> list1 = {1, 2, 3};
    std::forward_list<int> list2 = {4, 5, 6};

    auto it = list1.begin();
    ++it; // Move to the second element

    list1.splice_after(it, list2);

    std::cout << "List 1 after splice_after:" << std::endl;
    for (int num : list1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

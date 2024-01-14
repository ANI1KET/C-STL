// emplace_front_forward_list.cpp

// emplace_front(value): Inserts a new element at the beginning using the value.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList;

    myForwardList.emplace_front(3);
    myForwardList.emplace_front(2);
    myForwardList.emplace_front(1);

    std::cout << "Forward list elements after emplace_front:" << std::endl;
    for (int num : myForwardList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

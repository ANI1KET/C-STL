// push_front_forward_list.cpp

// push_front(value): Inserts a new element at the beginning.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList;

    myForwardList.push_front(3);
    myForwardList.push_front(2);
    myForwardList.push_front(1);

    std::cout << "Forward list elements after push_front:" << std::endl;
    for (int num : myForwardList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// pop_front_forward_list.cpp

// pop_front(): Removes the first element.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3};

    myForwardList.pop_front();

    std::cout << "Forward list elements after pop_front:" << std::endl;
    for (int num : myForwardList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

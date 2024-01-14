// remove_forward_list.cpp

// remove(value): Removes all elements with the specified value.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3, 2, 4, 2};

    myForwardList.remove(2);

    std::cout << "Forward list elements after remove:" << std::endl;
    for (int num : myForwardList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

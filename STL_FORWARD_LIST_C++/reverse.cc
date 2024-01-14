// reverse_forward_list.cpp

// reverse(): Reverses the order of elements in the forward list.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3, 4, 5};

    myForwardList.reverse();

    std::cout << "Forward list elements after reverse:" << std::endl;
    for (int num : myForwardList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

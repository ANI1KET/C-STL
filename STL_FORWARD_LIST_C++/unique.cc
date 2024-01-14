// unique_forward_list.cpp

// unique(): Removes consecutive duplicate elements from the forward list.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 1, 2, 2, 3, 3, 4, 5, 5};

    myForwardList.unique();

    std::cout << "Forward list elements after unique:" << std::endl;
    for (int num : myForwardList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

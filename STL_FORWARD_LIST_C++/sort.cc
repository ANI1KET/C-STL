// sort_forward_list.cpp

// sort(): Sorts the elements in the forward list.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {4, 1, 3, 5, 2};

    myForwardList.sort();

    std::cout << "Forward list elements after sort:" << std::endl;
    for (int num : myForwardList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// empty_forward_list.cpp

// empty(): Checks if the forward list is empty.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3};
    std::forward_list<int> emptyForwardList;

    if (myForwardList.empty())
    {
        std::cout << "The forward list is empty." << std::endl;
    }
    else
    {
        std::cout << "The forward list is not empty." << std::endl;
    }

    if (emptyForwardList.empty())
    {
        std::cout << "The empty forward list is indeed empty." << std::endl;
    }
    else
    {
        std::cout << "The empty forward list is not empty." << std::endl;
    }

    return 0;
}

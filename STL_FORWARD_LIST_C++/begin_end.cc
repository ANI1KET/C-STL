// iterators_forward_list.cpp

// begin(), end(): Iterators for traversing the forward list.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3};

    std::cout << "Forward list elements using iterators:" << std::endl;
    for (auto it = myForwardList.begin(); it != myForwardList.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

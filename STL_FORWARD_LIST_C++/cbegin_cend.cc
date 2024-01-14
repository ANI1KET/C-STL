// constant_iterators_forward_list.cpp

// cbegin(), cend(): Constant iterators for traversing the forward list.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3};

    std::cout << "Forward list elements using constant iterators:" << std::endl;
    for (auto cit = myForwardList.cbegin(); cit != myForwardList.cend(); ++cit)
    {
        std::cout << *cit << " ";
    }
    std::cout << std::endl;

    return 0;
}

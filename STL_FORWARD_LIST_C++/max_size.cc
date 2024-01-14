// max_size_forward_list.cpp

// max_size(): Returns the maximum number of elements the forward list can hold.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList;

    std::cout << "Maximum number of elements the forward list can hold: " << myForwardList.max_size() << std::endl;

    return 0;
}

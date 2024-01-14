// size_forward_list.cpp

// size(): Returns the number of elements in the forward list.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3};

    std::cout << "Number of elements in the forward list: " << myForwardList.size() << std::endl;

    return 0;
}

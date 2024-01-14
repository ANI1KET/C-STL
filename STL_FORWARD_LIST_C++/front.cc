// front_forward_list.cpp

// front(): Returns a reference to the first element.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3};

    int firstElement = myForwardList.front();

    std::cout << "First element of the forward list: " << firstElement << std::endl;

    return 0;
}

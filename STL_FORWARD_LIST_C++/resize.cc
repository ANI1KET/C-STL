// resize_forward_list.cpp

// resize(count): Changes the size of the forward list to contain count elements.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3, 4, 5};

    myForwardList.resize(3);

    std::cout << "Forward list elements after resize:" << std::endl;
    for (int num : myForwardList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

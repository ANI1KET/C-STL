// resize_value_forward_list.cpp

// resize(count, value): Changes the size of the forward list to contain count elements.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3, 4, 5};

    myForwardList.resize(8, 7);

    std::cout << "Forward list elements after resize with value:" << std::endl;
    for (int num : myForwardList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

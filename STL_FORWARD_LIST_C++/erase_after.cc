// erase_after_forward_list.cpp

// erase_after(position): Removes the element after the specified position.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3};

    auto it = myForwardList.begin();
    ++it; // Move the iterator to the second element

    myForwardList.erase_after(it);

    std::cout << "Forward list elements after erase_after:" << std::endl;
    for (int num : myForwardList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

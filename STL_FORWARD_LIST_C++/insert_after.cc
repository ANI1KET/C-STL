// insert_after_forward_list.cpp

// insert_after(position, value): Inserts a new element after the specified position.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3};

    auto it = myForwardList.begin();
    ++it; // Move the iterator to the second element

    myForwardList.insert_after(it, 5);

    std::cout << "Forward list elements after insert_after:" << std::endl;
    for (int num : myForwardList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

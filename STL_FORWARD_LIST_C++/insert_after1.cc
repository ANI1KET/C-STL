// insert_after_multiple_forward_list.cpp

// insert_after(position, count, value): Inserts multiple copies of value after the specified position.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3};

    auto it = myForwardList.begin();
    ++it; // Move to the second element

    myForwardList.insert_after(it, 3, 5); // Insert three copies of 5 after the second element

    std::cout << "Forward list elements after insert_after multiple:" << std::endl;
    for (int num : myForwardList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

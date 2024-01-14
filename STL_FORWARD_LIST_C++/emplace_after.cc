// emplace_after_forward_list.cpp

// emplace_after(position, value): Inserts a new element after the specified position using the value.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3};

    auto it = myForwardList.begin();
    ++it; // Move to the second element

    myForwardList.emplace_after(it, 5); // Insert a new element with value 5 after the second element

    std::cout << "Forward list elements after emplace_after:" << std::endl;
    for (int num : myForwardList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// clear_forward_list.cpp

// clear(): Removes all elements from the forward list.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3, 4, 5};

    myForwardList.clear();

    // Count the elements using a loop
    int count = 0;
    for (auto it = myForwardList.begin(); it != myForwardList.end(); ++it)
    {
        ++count;
    }

    std::cout << "Number of elements in the forward list: " << count << std::endl;

    return 0;
}

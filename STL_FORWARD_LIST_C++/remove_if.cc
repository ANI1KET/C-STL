// remove_if_forward_list.cpp

// remove_if(predicate): Removes all elements for which the predicate returns true.

#include <iostream>
#include <forward_list>

bool isEven(int num)
{
    return num % 2 == 0;
}

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3, 4, 5, 6};

    myForwardList.remove_if(isEven);

    std::cout << "Forward list elements after remove_if:" << std::endl;
    for (int num : myForwardList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

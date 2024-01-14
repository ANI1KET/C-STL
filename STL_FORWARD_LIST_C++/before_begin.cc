// before_begin_forward_list.cpp

// before_begin(): Returns an iterator referring to the position before the first element.

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> myForwardList = {1, 2, 3};

    auto it = myForwardList.before_begin();

    std::cout << "Position before the first element:" << std::endl;
    std::cout << *it << std::endl;

    return 0;
}

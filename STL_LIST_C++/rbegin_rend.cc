// rbegin_rend_list.cpp

// rbegin(), rend(): Returns reverse iterators.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    myList.push_back(5);
    myList.push_back(10);
    myList.push_back(3);

    std::cout << "List elements using reverse iterators: ";
    for (std::list<int>::reverse_iterator rit = myList.rbegin(); rit != myList.rend(); ++rit)
    {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    return 0;
}

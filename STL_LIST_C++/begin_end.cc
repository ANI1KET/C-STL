// begin_end_list.cpp

// begin(), end(): Returns iterators pointing to the beginning and end of the list.

#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    myList.push_back(5);
    myList.push_back(10);
    myList.push_back(3);

    std::cout << "List elements using iterators: ";
    for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

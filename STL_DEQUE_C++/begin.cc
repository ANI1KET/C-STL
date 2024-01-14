// begin_deque.cpp

// begin() - Returns an iterator to the beginning of the deque.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    std::deque<int>::iterator it = numbers.begin();

    std::cout << "First element: " << *it << std::endl;

    return 0;
}

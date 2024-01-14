// rbegin_deque.cpp

// rbegin() - Returns a reverse iterator to the last element of the deque.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    std::deque<int>::reverse_iterator rit = numbers.rbegin();

    std::cout << "Last element: " << *rit << std::endl;

    return 0;
}

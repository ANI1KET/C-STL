// rend_deque.cpp

// rend() - Returns a reverse iterator to the element before the first element of the deque.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    std::deque<int>::reverse_iterator rit = numbers.rend(); // Points to one before the first element

    // Iterate through the deque using the reverse iterator
    std::cout << "Deque elements in reverse: ";
    for (std::deque<int>::reverse_iterator riter = numbers.rbegin(); riter != rit; ++riter)
    {
        std::cout << *riter << " ";
    }
    std::cout << std::endl;

    return 0;
}

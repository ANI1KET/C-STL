// end_deque.cpp

// end() - Returns an iterator to the end of the deque.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    std::deque<int>::iterator it = numbers.end(); // Points to one past the last element

    // Iterate through the deque using the iterator
    std::cout << "Deque elements: ";
    for (std::deque<int>::iterator iter = numbers.begin(); iter != it; ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    return 0;
}

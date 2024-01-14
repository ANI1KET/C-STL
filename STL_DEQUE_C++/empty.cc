// empty_deque.cpp

// empty() - Returns true if the deque is empty, false otherwise.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers;

    if (numbers.empty())
    {
        std::cout << "Deque is empty." << std::endl;
    }
    else
    {
        std::cout << "Deque is not empty." << std::endl;
    }

    return 0;
}

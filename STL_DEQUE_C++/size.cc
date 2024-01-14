// size_deque.cpp

// size() - Returns the number of elements in the deque.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    std::cout << "Size of deque: " << numbers.size() << std::endl;

    return 0;
}

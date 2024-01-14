// pop_front_deque.cpp

// pop_front() - Removes the first element from the deque.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    std::cout << "Deque before pop_front: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    numbers.pop_front();

    std::cout << "Deque after pop_front: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

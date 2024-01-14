// push_front_deque.cpp

// push_front(value) - Inserts an element at the beginning of the deque.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers;

    numbers.push_front(3);
    numbers.push_front(2);
    numbers.push_front(1);

    std::cout << "Deque after push_front: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

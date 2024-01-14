// clear_deque.cpp

// clear() - Removes all elements from the deque.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    std::cout << "Deque before clear: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    numbers.clear();

    std::cout << "Deque after clear: ";
    if (numbers.empty())
    {
        std::cout << "Deque is empty.";
    }
    else
    {
        for (int num : numbers)
        {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}

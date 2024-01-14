// erase_range_deque.cpp

// erase(first, last) - Removes elements in the specified range.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    std::deque<int>::iterator first = numbers.begin() + 1; // Second element
    std::deque<int>::iterator last = numbers.begin() + 3;  // Fourth element

    numbers.erase(first, last);

    std::cout << "Deque after erase range: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

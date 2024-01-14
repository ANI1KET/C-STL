// at_deque.cpp

// at(index) - Returns a reference to the element at the specified index.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    try
    {
        int value = numbers.at(1);
        std::cout << "Value at index 1: " << value << std::endl;
    }
    catch (const std::out_of_range &ex)
    {
        std::cout << "Index out of range." << std::endl;
    }

    return 0;
}

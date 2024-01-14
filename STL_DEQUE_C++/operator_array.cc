// operator_bracket_deque.cpp

// operator[] - Returns a reference to the element at the specified index.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    int value = numbers[1];
    std::cout << "Value at index 1: " << value << std::endl;

    return 0;
}

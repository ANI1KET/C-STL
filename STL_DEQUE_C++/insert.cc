// insert_deque.cpp

// insert(position, value) - Inserts an element at the specified position.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers;

    numbers.push_back(1);
    numbers.push_back(3);

    std::deque<int>::iterator it = numbers.begin();
    ++it; // Advance iterator to the second position

    numbers.insert(it, 2);

    std::cout << "Deque after insert: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

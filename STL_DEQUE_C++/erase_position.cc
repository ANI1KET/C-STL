// erase_deque.cpp

// erase(position) - Removes the element at the specified position.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    std::deque<int>::iterator it = numbers.begin();
    ++it; // Advance iterator to the second position

    numbers.erase(it);

    std::cout << "Deque after erase: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

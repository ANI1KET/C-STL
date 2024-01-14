// back_deque.cpp

// back() - Returns a reference to the last element of the deque.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    if (!numbers.empty())
    {
        int back_element = numbers.back();
        std::cout << "Back element: " << back_element << std::endl;
    }
    else
    {
        std::cout << "Deque is empty." << std::endl;
    }

    return 0;
}

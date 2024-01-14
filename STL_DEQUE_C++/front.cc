// front_deque.cpp

// front() - Returns a reference to the first element of the deque.

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
        int front_element = numbers.front();
        std::cout << "Front element: " << front_element << std::endl;
    }
    else
    {
        std::cout << "Deque is empty." << std::endl;
    }

    return 0;
}

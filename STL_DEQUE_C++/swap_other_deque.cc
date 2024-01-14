// swap_deque.cpp

// swap(other_deque) - Swaps the contents of two deques.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> deque1;
    deque1.push_back(1);
    deque1.push_back(2);
    deque1.push_back(3);

    std::deque<int> deque2;
    deque2.push_back(4);
    deque2.push_back(5);
    deque2.push_back(6);

    deque1.swap(deque2);

    std::cout << "Deque 1 after swap: ";
    for (int num : deque1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Deque 2 after swap: ";
    for (int num : deque2)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

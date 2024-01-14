// operator_equal_deque.cpp

// operator== - Checks if two deques are equal.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> deque1, deque2;

    deque1.push_back(1);
    deque1.push_back(2);
    deque1.push_back(3);

    deque2.push_back(1);
    deque2.push_back(2);
    deque2.push_back(3);

    bool areEqual = (deque1 == deque2);

    std::cout << "Are deques equal? " << (areEqual ? "Yes" : "No") << std::endl;

    return 0;
}

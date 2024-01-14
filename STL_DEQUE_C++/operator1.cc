// operator_not_equal_deque.cpp

// operator!= - Checks if two deques are not equal.

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> deque1, deque2;

    deque1.push_back(1);
    deque1.push_back(2);
    deque1.push_back(3);

    deque2.push_back(4);
    deque2.push_back(5);
    deque2.push_back(6);

    bool areNotEqual = (deque1 != deque2);

    std::cout << "Are deques not equal? " << (areNotEqual ? "Yes" : "No") << std::endl;

    return 0;
}

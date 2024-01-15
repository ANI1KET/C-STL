// operator_not_equal_queue.cpp

// operator!= - Checks if two queues are not equal.

#include <iostream>
#include <queue>

int main()
{
    std::queue<int> queue1, queue2;

    queue1.push(1);
    queue1.push(2);
    queue1.push(3);

    queue2.push(4);
    queue2.push(5);
    queue2.push(6);

    bool areNotEqual = (queue1 != queue2);

    std::cout << "Are queues not equal? " << (areNotEqual ? "Yes" : "No") << std::endl;

    return 0;
}

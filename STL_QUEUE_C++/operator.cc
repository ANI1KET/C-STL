// operator_equal_queue.cpp

// operator== - Checks if two queues are equal.

#include <iostream>
#include <queue>

int main()
{
    std::queue<int> queue1, queue2;

    queue1.push(1);
    queue1.push(2);
    queue1.push(3);

    queue2.push(1);
    queue2.push(2);
    queue2.push(3);

    bool areEqual = (queue1 == queue2);

    std::cout << "Are queues equal? " << (areEqual ? "Yes" : "No") << std::endl;

    return 0;
}

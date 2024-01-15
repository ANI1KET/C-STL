// swap_priority_queue.cpp

// swap(other): Swaps the contents of two priority queues.

#include <iostream>
#include <queue>

int main()
{
    std::priority_queue<int> pq1;
    std::priority_queue<int> pq2;

    pq1.push(5);
    pq1.push(10);

    pq2.push(3);

    std::cout << "Before swap:" << std::endl;
    std::cout << "pq1 top element: " << pq1.top() << std::endl;
    std::cout << "pq2 top element: " << pq2.top() << std::endl;

    pq1.swap(pq2); // Swap the contents

    std::cout << "After swap:" << std::endl;
    std::cout << "pq1 top element: " << pq1.top() << std::endl;
    std::cout << "pq2 top element: " << pq2.top() << std::endl;

    return 0;
}

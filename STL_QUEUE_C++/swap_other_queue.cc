// swap_queue.cpp

// swap(other_queue) - Swaps the contents of two queues.

#include <iostream>
#include <queue>

int main()
{
    std::queue<int> queue1;
    queue1.push(1);
    queue1.push(2);
    queue1.push(3);

    std::queue<int> queue2;
    queue2.push(4);
    queue2.push(5);
    queue2.push(6);

    queue1.swap(queue2);

    std::cout << "Queue 1 after swap: ";
    while (!queue1.empty())
    {
        std::cout << queue1.front() << " ";
        queue1.pop();
    }
    std::cout << std::endl;

    std::cout << "Queue 2 after swap: ";
    while (!queue2.empty())
    {
        std::cout << queue2.front() << " ";
        queue2.pop();
    }
    std::cout << std::endl;

    return 0;
}

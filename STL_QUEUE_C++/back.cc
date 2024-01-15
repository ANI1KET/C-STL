// back_queue.cpp

// back() - Returns a reference to the back element of the queue.

#include <iostream>
#include <queue>

int main()
{
    std::queue<int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(234);

    if (!numbers.empty())
    {
        int back_element = numbers.back();
        std::cout << "Back element: " << back_element << std::endl;
    }
    else
    {
        std::cout << "Queue is empty." << std::endl;
    }

    return 0;
}

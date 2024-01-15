// make_heap_priority_queue.cpp

// make_heap(begin, end): Constructs a max heap from a range of elements.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> vec = {10, 5, 15, 20, 8};

    // Convert vector into a max heap
    std::make_heap(vec.begin(), vec.end());

    std::cout << "Max heap elements: ";
    for (int num : vec)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

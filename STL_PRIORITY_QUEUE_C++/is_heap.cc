// is_heap_priority_queue.cpp

// is_heap(begin, end): Checks if a range is a valid max heap.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> vec = {20, 15, 10, 8, 5};

    // Convert vector into a max heap
    std::make_heap(vec.begin(), vec.end());

    if (std::is_heap(vec.begin(), vec.end()))
    {
        std::cout << "The range is a valid max heap." << std::endl;
    }
    else
    {
        std::cout << "The range is not a valid max heap." << std::endl;
    }

    return 0;
}

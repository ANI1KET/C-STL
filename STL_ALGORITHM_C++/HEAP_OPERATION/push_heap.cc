// push_heap.cpp

// Description: Adds an element to a max heap and maintains the heap property.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // Make heap
    std::make_heap(nums.begin(), nums.end());

    // Add a new element
    nums.push_back(7);
    std::push_heap(nums.begin(), nums.end());

    std::cout << "Vector after push_heap: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

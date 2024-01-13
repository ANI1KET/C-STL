// sort_heap.cpp

// Description: Sorts elements in a max heap.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // Make heap
    std::make_heap(nums.begin(), nums.end());

    // Sort the heap
    std::sort_heap(nums.begin(), nums.end());

    std::cout << "Vector after sort_heap: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

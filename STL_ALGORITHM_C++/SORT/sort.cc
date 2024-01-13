// sort.cpp

// Description: Sorts a range of elements in ascending order.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    std::sort(nums.begin(), nums.end());
    std::cout << "Sorted nums: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

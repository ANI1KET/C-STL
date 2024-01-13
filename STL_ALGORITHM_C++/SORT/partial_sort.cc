// partial_sort.cpp

// Description: Partially sorts a range, with the smallest elements at the beginning.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    std::partial_sort(nums.begin(), nums.begin() + 5, nums.end());
    std::cout << "Partially sorted nums: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

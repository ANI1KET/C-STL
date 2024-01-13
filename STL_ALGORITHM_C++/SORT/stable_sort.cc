// stable_sort.cpp

// Description: Sorts a range of elements while preserving the order of equal elements.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    std::vector<int> stable_nums(nums);
    std::stable_sort(stable_nums.begin(), stable_nums.end());
    std::cout << "Stable sorted nums: ";
    for (int num : stable_nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

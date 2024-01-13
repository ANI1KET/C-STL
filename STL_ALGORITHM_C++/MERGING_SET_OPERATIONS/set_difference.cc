// set_difference.cpp

// Description: Computes the difference between two sorted ranges.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums1 = {1, 2, 3, 4, 5};
    std::vector<int> nums2 = {3, 4, 5, 6, 7};
    std::vector<int> difference_result(nums1.size() + nums2.size());

    std::set_difference(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), difference_result.begin());

    std::cout << "\nDifference result: ";
    for (int num : difference_result)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

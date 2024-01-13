// set_symmetric_difference.cpp

// Description: Computes the symmetric difference between two sorted ranges.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums1 = {1, 2, 3, 4, 5};
    std::vector<int> nums2 = {3, 4, 5, 6, 7};
    std::vector<int> symmetric_difference_result(nums1.size() + nums2.size());

    std::set_symmetric_difference(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), symmetric_difference_result.begin());

    std::cout << "Symmetric Difference result: ";
    for (int num : symmetric_difference_result)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// set_intersection.cpp

// Description: Computes the intersection of two sorted ranges.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums1 = {1, 2, 3, 4, 5};
    std::vector<int> nums2 = {3, 4, 5, 6, 7};
    std::vector<int> intersection_result(std::min(nums1.size(), nums2.size()));

    std::set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), intersection_result.begin());

    std::cout << "Intersection result: ";
    for (int num : intersection_result)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// set_union.cpp

// Description: Computes the union of two sorted ranges.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums1 = {1, 3, 5, 7, 9};
    std::vector<int> nums2 = {2, 4, 6, 8, 10};
    std::vector<int> union_result(nums1.size() + nums2.size());

    std::set_union(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), union_result.begin());

    std::cout << "Union result: ";
    for (int num : union_result)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

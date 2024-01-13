// merge.cpp

// Description: Merges two sorted ranges into a single sorted range.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums1 = {1, 3, 5, 7, 9};
    std::vector<int> nums2 = {2, 4, 6, 8, 10};
    std::vector<int> merged(nums1.size() + nums2.size());

    std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());

    std::cout << "\nMerged vector : ";
    for (int num : merged)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

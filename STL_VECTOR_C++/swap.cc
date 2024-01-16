// swap.cpp

// swap(other_vector) - Swaps the contents of two vectors.

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums1 = {1, 2, 3};
    std::vector<int> nums2 = {4, 5, 6};

    nums1.swap(nums2);

    std::cout << "Vector 1 after swap: ";
    for (int num : nums1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Vector 2 after swap: ";
    for (int num : nums2)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

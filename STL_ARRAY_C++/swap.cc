// swap_array.cpp

#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> nums1 = {1, 2, 3, 4, 5};
    std::array<int, 5> nums2 = {6, 7, 8, 9, 10};

    nums1.swap(nums2);

    std::cout << "Array 1 after swap: ";
    for (int num : nums1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Array 2 after swap: ";
    for (int num : nums2)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

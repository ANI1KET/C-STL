// inner_product.cpp

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> nums1 = {1, 2, 3, 4, 5};
    std::vector<int> nums2 = {5, 4, 3, 2, 1};

    int result = std::inner_product(nums1.begin(), nums1.end(), nums2.begin(), 0);

    std::cout << "Inner product: " << result << std::endl;

    return 0;
}

// min_max_element.cpp

// Description [min_element] : Finds the iterator pointing to the smallest element in a range.
// Description [max_element] : Finds the iterator pointing to the largest element in a range.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    auto min_element_it = std::min_element(nums.begin(), nums.end());
    auto max_element_it = std::max_element(nums.begin(), nums.end());

    std::cout << "Min element: " << *min_element_it << std::endl;
    std::cout << "Max element: " << *max_element_it << std::endl;

    return 0;
}

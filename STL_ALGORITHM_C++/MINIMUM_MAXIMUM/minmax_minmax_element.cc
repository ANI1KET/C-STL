// minmax_minmax_element.cpp

// Description [minmax] : Returns the smallest and largest of two values as a pair.
// Description [minmax_element] : Finds the iterators pointing to the smallest and largest elements in a range.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    auto minmax_pair = std::minmax(nums.begin(), nums.end());
    auto minmax_element_pair = std::minmax_element(nums.begin(), nums.end());

    std::cout << "Min value: " << *minmax_pair.first << std::endl;
    std::cout << "Max value: " << *minmax_pair.second << std::endl;

    std::cout << "Min element: " << *minmax_element_pair.first << std::endl;
    std::cout << "Max element: " << *minmax_element_pair.second << std::endl;

    return 0;
}

// erase.cpp

// erase(iterator) - Removes the element at the specified position.

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5};
    auto it = nums.begin() + 2; // Remove element at index 2
    nums.erase(it);

    std::cout << "Vector after erase: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

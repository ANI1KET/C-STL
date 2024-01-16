// insert.cpp

// insert(iterator, value) - Inserts an element at the specified position.

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5};
    auto it = nums.begin() + 2; // Insert at index 2
    nums.insert(it, 42);

    std::cout << "Vector after insert: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

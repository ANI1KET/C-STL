// fill_array.cpp

#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> nums = {1, 2, 3, 4, 5};
    nums.fill(42);

    std::cout << "Array after fill: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

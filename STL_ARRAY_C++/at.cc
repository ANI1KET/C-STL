// at_array.cpp

#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> nums = {1, 2, 3, 4, 5};

    int value = nums.at(2);

    std::cout << "Value at index 2: " << value << std::endl;

    return 0;
}

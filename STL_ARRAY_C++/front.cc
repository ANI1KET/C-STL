// front_array.cpp

#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> nums = {1, 2, 3, 4, 5};
    int first_element = nums.front();

    std::cout << "First element: " << first_element << std::endl;

    return 0;
}

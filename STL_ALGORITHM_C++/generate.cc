// generate.cpp

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums(5);

    int start_value = 1;
    std::generate(nums.begin(), nums.end(), [&]()
                  { return start_value++; });

    std::cout << "Vector after generate: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

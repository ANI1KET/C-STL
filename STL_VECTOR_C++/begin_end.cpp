// begin_end.cpp

// begin() - Returns an iterator pointing to the first element.
// end() - Returns an iterator pointing to one past the last element.

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5};

    std::cout << "Vector elements: ";
    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    // std::cout << nums.end()[-1] << std::endl;
    // std::cout << nums.end()[-2] << std::endl;
    // std::cout << nums.end()[-3] << std::endl;
    // std::cout << nums.end()[-4] << std::endl;
    // std::cout << nums.end()[-5] << std::endl;

    // std::cout << nums.end()[-6] << std::endl;

    // std::cout << nums.begin()[0] << std::endl;
    // std::cout << nums.begin()[1] << std::endl;
    // std::cout << nums.begin()[2] << std::endl;
    // std::cout << nums.begin()[3] << std::endl;
    // std::cout << nums.begin()[4] << std::endl;

    // std::cout << nums.begin()[5] << std::endl;

    return 0;
}

// empty.cpp

// empty() - Returns true if the vector is empty, false otherwise.

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums;
    std::cout << "Is vector empty? " << (nums.empty() ? "Yes" : "No") << std::endl;

    return 0;
}

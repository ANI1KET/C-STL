// copy_if.cpp

// Description: Copies elements from one range to another, based on a condition.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> destination;

    std::copy_if(source.begin(), source.end(), std::back_inserter(destination), [](int num)
                 {
                     return num % 2 == 0; // Copy even numbers
                 });

    std::cout << "Destination vector after copy_if: ";
    for (int num : destination)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

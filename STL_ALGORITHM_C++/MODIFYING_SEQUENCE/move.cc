// move.cpp

// Description: Moves elements from one range to another.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> destination;

    std::move(source.begin(), source.end(), std::back_inserter(destination));

    std::cout << "Source vector after move: ";
    for (int num : source)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Destination vector after move: ";
    for (int num : destination)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// empty_array.cpp

#include <iostream>
#include <array>

int main()
{
    std::array<int, 0> empty_array;
    std::cout << "Is array empty? " << (empty_array.empty() ? "Yes" : "No") << std::endl;

    return 0;
}

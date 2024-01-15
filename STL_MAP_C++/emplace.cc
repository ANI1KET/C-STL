// emplace_map.cpp

// emplace(key, value): Inserts a key-value pair using move semantics.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap.emplace(1, "one");
    myMap.emplace(2, "two");
    myMap.emplace(3, "three");

    std::cout << "Map elements after emplace: ";
    for (const auto &pair : myMap)
    {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;

    return 0;
}

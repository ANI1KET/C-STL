// begin_end_map.cpp

// begin(), end(): Iterators for traversing the map in ascending order.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap[3] = "three";
    myMap[1] = "one";
    myMap[2] = "two";

    std::cout << "Map elements in ascending order:" << std::endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it)
    {
        std::cout << "(" << it->first << ", " << it->second << ") ";
    }
    std::cout << std::endl;

    return 0;
}

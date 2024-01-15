// rbegin_rend_map.cpp

// rbegin(), rend(): Reverse iterators for traversing the map in descending order.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap[3] = "three";
    myMap[1] = "one";
    myMap[2] = "two";

    std::cout << "Map elements in descending order:" << std::endl;
    for (auto rit = myMap.rbegin(); rit != myMap.rend(); ++rit)
    {
        std::cout << "(" << rit->first << ", " << rit->second << ") ";
    }
    std::cout << std::endl;

    return 0;
}

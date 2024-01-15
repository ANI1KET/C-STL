// key_comp_map.cpp

// key_comp(): Returns the comparison function used to compare keys.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap[3] = "three";
    myMap[1] = "one";
    myMap[2] = "two";

    std::map<int, std::string>::key_compare keyCompare = myMap.key_comp();

    std::cout << "Map elements using key_comp:" << std::endl;
    for (auto it = myMap.begin(); keyCompare((*it).first, 3); ++it)
    {
        std::cout << "(" << it->first << ", " << it->second << ") ";
    }
    std::cout << std::endl;

    return 0;
}

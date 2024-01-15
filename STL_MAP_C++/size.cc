// size_map.cpp

// size(): Returns the number of key-value pairs in the map.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    std::cout << "Size of the map: " << myMap.size() << std::endl;

    return 0;
}

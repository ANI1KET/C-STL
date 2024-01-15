// clear_map.cpp

// clear(): Removes all elements from the map.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    myMap.clear(); // Remove all elements from the map

    std::cout << "Size of the map after clear: " << myMap.size() << std::endl;

    return 0;
}

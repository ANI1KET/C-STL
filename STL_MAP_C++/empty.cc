// empty_map.cpp

// empty(): Checks if the map is empty.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    if (myMap.empty())
    {
        std::cout << "The map is empty." << std::endl;
    }
    else
    {
        std::cout << "The map is not empty." << std::endl;
    }

    myMap[1] = "one";

    if (myMap.empty())
    {
        std::cout << "The map is empty." << std::endl;
    }
    else
    {
        std::cout << "The map is not empty." << std::endl;
    }

    return 0;
}

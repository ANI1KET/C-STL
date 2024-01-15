// at_map.cpp

// at(key): Accesses the value associated with the given key.

#include <iostream>
#include <map>
#include <stdexcept>

int main()
{
    std::map<int, std::string> myMap;

    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    try
    {
        std::cout << "Value associated with key 2: " << myMap.at(2) << std::endl;
        std::cout << "Value associated with key 4: " << myMap.at(4) << std::endl;
    }
    catch (const std::out_of_range &e)
    {
        std::cout << "Key not found." << std::endl;
    }

    return 0;
}

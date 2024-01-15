// find_map.cpp

// find(key): Finds an element with the specified key.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    std::map<int, std::string>::iterator it = myMap.find(2);
    if (it != myMap.end())
    {
        std::cout << "Element found with key 2: " << it->second << std::endl;
    }
    else
    {
        std::cout << "Element with key 2 not found." << std::endl;
    }

    it = myMap.find(4);
    if (it != myMap.end())
    {
        std::cout << "Element found with key 4: " << it->second << std::endl;
    }
    else
    {
        std::cout << "Element with key 4 not found." << std::endl;
    }

    return 0;
}

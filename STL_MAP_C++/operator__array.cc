// operator_bracket_map.cpp

// operator[](key): Accesses the value associated with the given key, creating the key if it doesn't exist.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap[1] = "one";
    myMap[2] = "two";

    std::cout << "Value associated with key 1: " << myMap[1] << std::endl;
    std::cout << "Value associated with key 2: " << myMap[2] << std::endl;
    std::cout << "Value associated with key 3 (new key): " << myMap[3] << std::endl;

    return 0;
}

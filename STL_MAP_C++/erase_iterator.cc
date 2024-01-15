// erase_iterator_map.cpp

// erase(iterator): Removes the element pointed to by the iterator.

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
        myMap.erase(it); // Remove the element pointed to by the iterator
    }

    std::cout << "Map elements after erase by iterator: ";
    for (const auto &pair : myMap)
    {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;

    return 0;
}

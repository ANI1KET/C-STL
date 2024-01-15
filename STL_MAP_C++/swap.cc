// swap_map.cpp

// swap(other): Swaps the contents of two maps.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> map1;
    std::map<int, std::string> map2;

    map1[1] = "one";
    map1[2] = "two";

    map2[3] = "three";
    map2[4] = "four";

    std::cout << "Map 1 before swap:" << std::endl;
    for (const auto &kv : map1)
    {
        std::cout << "(" << kv.first << ", " << kv.second << ") ";
    }
    std::cout << std::endl;

    std::cout << "Map 2 before swap:" << std::endl;
    for (const auto &kv : map2)
    {
        std::cout << "(" << kv.first << ", " << kv.second << ") ";
    }
    std::cout << std::endl;

    map1.swap(map2);

    std::cout << "Map 1 after swap:" << std::endl;
    for (const auto &kv : map1)
    {
        std::cout << "(" << kv.first << ", " << kv.second << ") ";
    }
    std::cout << std::endl;

    std::cout << "Map 2 after swap:" << std::endl;
    for (const auto &kv : map2)
    {
        std::cout << "(" << kv.first << ", " << kv.second << ") ";
    }
    std::cout << std::endl;

    return 0;
}

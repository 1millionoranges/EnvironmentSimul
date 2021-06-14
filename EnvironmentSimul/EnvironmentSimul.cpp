#include "Map.h"
#include <iostream>

int main()
{
    Map map;
    map.setSquare(1, 1, 1);
    map.setSquare(2, 2, 6);
    int val1 = map.getSquare(1, 1);
    int val2 = map.getSquare(2, 2);
    std::cout << "val1= ";
    std::cout << val1;
    std::cout << "\nval2= ";
    std::cout << val2;

}

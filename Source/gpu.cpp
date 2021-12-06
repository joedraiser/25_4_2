#include "ram.h"
#include "gpu.h"
#include <iostream>

void display()
{
    for(int i=0;i<8;i++)
        std::cout << ram[i];

    std::cout << std::endl;
}
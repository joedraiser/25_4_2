#include "cpu.h"
#include "ram.h"
#include <iostream>

void sum()
{
    int temp=0;
    for(int i=0;i<8;i++)
        temp+=ram[i];

    std::cout << temp << std::endl;
}
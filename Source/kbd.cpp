#include "kbd.h"
#include "ram.h"
#include <math.h>
#include <iostream>

void input()
{
    std::cout << "Input 8 digits: ";
    std::string digitsStr;
    std::cin >> digitsStr;

    int digits[8];
    digits[7]=std::stoi(digitsStr);

    for(int i=0;i<7;i++)
    {
        digits[i]=digits[7]/pow(10.0,7-i);
        digits[7]=digits[7]%(int)pow(10.0,7-i);
    }

    write(digits);
}
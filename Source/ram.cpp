#include "ram.h"

int ram[8];

void write(int* digits)
{
    for(int i=0;i<8;i++)
    {
        ram[i]=*(digits+i);
    }
}

void read(int* digits)
{
    for(int i=0;i<8;i++)
    {
        *(digits+i)=ram[i];
    }
}
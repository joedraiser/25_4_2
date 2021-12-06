#include "disk.h"
#include "ram.h"
#include <fstream>
#include <iostream>

void save()
{
    std::ofstream data("data.txt");

    if(!data.is_open())
    {
        std::cout << "File is not opened.";
        exit(EXIT_FAILURE);
    }

    for(int i=0;i<8;i++)
        data << ram[i] << " ";

    data.close();
}

void load()
{
    std::ifstream data("data.txt");

    if(!data.is_open())
    {
        std::cout << "File is not opened.";
        exit(EXIT_FAILURE);
    }

    for(int i=0;i<8;i++)
        data >> ram[i];
}
#include <iostream>
#include "cpu.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"
#include "ram.h"

int main()
{
    std::string temp;
    do {
        std::cout << "Type command: ";
        std::cin >> temp;

        if(temp=="sum")
            sum();
        else if(temp=="save")
            save();
        else if(temp=="load")
            load();
        if (temp == "input")
            input();
        else if (temp == "display")
            display();
    }
    while(temp!="exit");

    return 0;
}

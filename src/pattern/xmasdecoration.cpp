
#include "xmasdecoration.h"
#include <iostream>

void XmasDecoration::makeDecoration() const
{
    std::cout << "create xmas decoration." << std::endl;
}

void XmasDecoration::makeDecoration(std::string name) const
{
    std::cout << "create xmas decoration name : " << name << std::endl;
}

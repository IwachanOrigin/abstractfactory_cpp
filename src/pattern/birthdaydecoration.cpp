
#include "birthdaydecoration.h"
#include <iostream>

void BirthdayDecoration::makeDecoration() const
{
    std::cout << "create birthday decoration." << std::endl;
}

void BirthdayDecoration::makeDecoration(std::string name) const
{
    std::cout << "create birthday decoration name : " << name << std::endl;
}

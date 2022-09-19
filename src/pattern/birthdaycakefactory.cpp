
#include "birthdaycakefactory.h"
#include "birthdaybase.h"
#include "birthdayfruit.h"
#include "birthdaydecoration.h"

CakeBase* BirthdayCakeFactory::createBase()
{
    return new BirthdayBase();
}

Fruit* BirthdayCakeFactory::createFruit()
{
    return new BirthdayFruit();
}

Decoration* BirthdayCakeFactory::createDecoration()
{
    return new BirthdayDecoration();
}

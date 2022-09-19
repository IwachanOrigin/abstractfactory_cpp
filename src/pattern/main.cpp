
#include "decocakefactory.h"
#include "birthdaycakefactory.h"
#include "xmascakefactory.h"
#include <iostream>

int main(int argc, char *argv[])
{
    DecoCakeFactory *pFactory = nullptr;
    CakeBase *pBase = nullptr;
    Fruit *pFruit = nullptr;
    Decoration *pDecoration = nullptr;

    pFactory = new BirthdayCakeFactory();
    pBase = pFactory->createBase();
    pFruit = pFactory->createFruit();
    pDecoration = pFactory->createDecoration();

    pBase->makeBase();
    pFruit->makeFruit();
    pDecoration->makeDecoration("aimi");

    return 0;
}

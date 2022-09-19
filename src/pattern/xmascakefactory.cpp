
#include "xmascakefactory.h"
#include "xmasbase.h"
#include "xmasfruit.h"
#include "xmasdecoration.h"

CakeBase* XmasCakeFactory::createBase()
{
    return new XmasBase();
}

Fruit* XmasCakeFactory::createFruit()
{
    return new XmasFruit();
}

Decoration* XmasCakeFactory::createDecoration()
{
    return new XmasDecoration();
}


#ifndef BIRTHDAY_CAKE_FACTORY_H_
#define BIRTHDAY_CAKE_FACTORY_H_

#include "decocakefactory.h"

/**
 * @brief birthday cake用の部品を作成するための工場クラス
 */

class BirthdayCakeFactory : public DecoCakeFactory
{
public:
    CakeBase *createBase();
    Fruit *createFruit();
    Decoration *createDecoration();
};

#endif // BIRTHDAY_CAKE_FACTORY_H_

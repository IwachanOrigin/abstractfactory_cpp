
#ifndef XMAS_CAKE_FACTORY_H_
#define XMAS_CAKE_FACTORY_H_

#include "decocakefactory.h"

/**
 * @brief Xmas cakeの部品を作成するための工場クラス
 */

class XmasCakeFactory : public DecoCakeFactory
{
public:
    CakeBase *createBase();
    Fruit *createFruit();
    Decoration *createDecoration();
};

#endif // XMAS_CAKE_FACTORY_H_

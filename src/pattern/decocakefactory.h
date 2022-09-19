
#ifndef DECO_CAKE_FACTORY_H_
#define DECO_CAKE_FACTORY_H_

#include "cakebase.h"
#include "fruit.h"
#include "decoration.h"

/**
 * @brief このクラスは、ただ部品を作るだけの工場クラス. 
 */

class DecoCakeFactory
{
public:
    virtual CakeBase *createBase() = 0;
    virtual Fruit *createFruit() = 0;
    virtual Decoration *createDecoration() = 0;
};

#endif // DECO_CAKE_FACTORY_H_

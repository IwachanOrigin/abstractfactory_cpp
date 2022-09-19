
#ifndef XMAS_DECORATION_H_
#define XMAS_DECORATION_H_

#include "decoration.h"

class XmasDecoration : public Decoration
{
public:
    virtual void makeDecoration() const;
    virtual void makeDecoration(std::string name) const;
};

#endif // XMAS_DECORATION_H_

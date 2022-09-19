
#ifndef BIRTHDAY_DECORATION_H_
#define BIRTHDAY_DECORATION_H_

#include "decoration.h"

class BirthdayDecoration : public Decoration
{
public:
    virtual void makeDecoration() const;
    virtual void makeDecoration(std::string name) const;
};

#endif // BIRTHDAY_DECORATION_H_

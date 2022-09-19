
#ifndef DECORATION_H_
#define DECORATION_H_

#include <string>

class Decoration
{
public:
    virtual void makeDecoration() const = 0;
    virtual void makeDecoration(std::string name) const = 0;
};

#endif // DECORATION_H_

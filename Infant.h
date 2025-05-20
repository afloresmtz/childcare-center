#ifndef INFANT_H
#define INFANT_H

#include <string>
#include "Child.h"

class Infant : public Child {
private:
    int bottles;

public:
    Infant(const std::string& name, int age, int bottles);
    std::string showNeeds() override;
    int getBottles() const;
    void setBottles(int amount);
};

#endif

#ifndef INFANT_H
#define INFANT_H
#include <iostream>
#include <string>
#include "Child.h"
using namespace std;

class Infant : public Child {
private:
    int bottles;
public:
    Infant(string name, int age, int bottles);
    string showNeeds();
    int getBottles();
    void setBottles(int amount);

};
#endif

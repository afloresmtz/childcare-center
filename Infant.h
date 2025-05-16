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
    string showneeds();
    int getbottles();
    void setbottles(int amount);

};
#endif

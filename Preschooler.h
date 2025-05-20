#ifndef PRESCHOOLER_H
#define PRESCHOOLER_H

#include <iostream>
#include <string>
#include "Child.h"

using namespace std;

class Preschooler : public Child {
private:
    int autonomyLevel;
public:
    Preschooler(string name, int age, int autonomy);
    string showNeeds() override; 
    int getAuto();
    void setAuto(int level);
};
#endif

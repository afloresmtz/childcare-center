#ifndef PRESCHOOLER_H
#define PRESCHOOLER_H

#include <iostream>
#include <string>

using namespace std;

class Preschooler : public Child {
private: 
    int autonomyLevel;
public:
    Preschooler(string name, int age, int autonomyLevel);
    string showneeds();
    int getAge();
    int getAutonomyLevel(); 

    };
    #endif

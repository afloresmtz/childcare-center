#include "Infant.h"

Infant::Infant(string name, int age, int bottles)
    : Child(name, age), bottles(bottles) { }

string Infant::showNeeds() {
   
    return getName() + " needs " + to_string(bottles) + " bottles.";
}

int Infant::getBottles() {
    return bottles;
}

void Infant::setBottles(int amount) {
    bottles = amount;
}


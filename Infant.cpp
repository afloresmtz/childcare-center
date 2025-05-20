#include "Infant.h"

Infant::Infant(const std::string& name, int age, int bottles)
  : Child(name, age), bottles(bottles) { }

std::string Infant::showNeeds() {
    return getName() + " needs " + std::to_string(bottles) + " bottles";
}

int Infant::getBottles() const {
    return bottles;
}

void Infant::setBottles(int amount) {
    bottles = amount;
}



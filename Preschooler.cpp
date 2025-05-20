#include "Preschooler.h"

Preschooler::Preschooler(string name, int age, int autonomy) : Child(name, age) {
    autonomyLevel = autonomy;
}

string Preschooler::showNeeds() {
    return getName() + " is a preschooler with autonomy level " + to_string(autonomyLevel) + 
           " and needs guidance with complex tasks.";
}

int Preschooler::getAuto() {
    return autonomyLevel;
}

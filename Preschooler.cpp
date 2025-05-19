#include "Preschooler.h"
Preschooler::Preschooler(string name, int age, int autonomy) : Child(name, age) {
    autonomyLevel = autonomy;
}

string Preschooler::showNeeds() {
    return getName() + " needs help with complex tasks but can handle basic self-care with autonomy level " + 
           to_string(autonomyLevel);
}

int Preschooler::getAuto() {
    return autonomyLevel;
}

void Preschooler::setAuto(int level) {
    autonomyLevel = level;
}

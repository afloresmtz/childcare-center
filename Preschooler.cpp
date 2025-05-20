#include "Preschooler.h"

// Constructor
Preschooler::Preschooler(string name, int age, int autonomy) : Child(name, age) {
    autonomyLevel = autonomy;
}

// Override the showNeeds 
string Preschooler::showNeeds() {
    return getName() + " is a preschooler with autonomy level " + to_string(autonomyLevel) + 
           " and needs guidance with complex tasks.";
}

// Getter
int Preschooler::getAuto() {
    return autonomyLevel;
}

// Setter
void Preschooler::setAuto(int level) {
    autonomyLevel = level;
}

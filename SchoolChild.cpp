// Incluye el header
#include "SchoolChild.h"

// Constructor. Al usar ":" nos ahorramos el especificar el atributo
SchoolChild::SchoolChild(std::string name, int age, int level)
: Child(name, age), readingLevel(level){}

// Método de showNeeds
std::string SchoolChild::showNeeds(){
    return name + "(Schoolchild) needs educational activities and free play.";
}

// Getter
int SchoolChild::getLevel(){
    return readingLevel;
}

// Setter
void SchoolChild::setLevel(int level){
    readingLevel = level;
}

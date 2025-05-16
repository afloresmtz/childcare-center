#include "SchoolChild.h"

SchoolChild::SchoolChild(std:string name, int age, int level)
: Child(name, age), readingLevel(level){}

std::string SchoolChild::showNeeds(){
    return name + "Schoolchild"
}

#include "SchoolChild.h"

SchoolChild::SchoolChild(std:string name, int age, int level)
: Child(name, age), readingLevel(level){}

std::string SchoolChild::showNeeds(){
    return name + "(Schoolchild) needs educational activities and free play.";
}

int SchoolChild::getLevel(){
    return readingLevel;
}

void SchoolChild::setLevel(int level){
    readingLevel = level;
}

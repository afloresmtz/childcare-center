#include "Child.h"

// Constructor default
Child::Child() : name("No name"), age(0) {}

// Constructor with parameters
Child::Child(const std::string& name, int age) : name(name), age(age) {}

// Getters
std::string Child::getName() const {return name;}
int Child::getAge() const {return age;}

// Setters
void Child::setName(const std::string& newName) {name = newName;}
void Child::setAge(int newAge) {age = newAge;}

// Method to display child information
std::string Child::showNeeds() {return "Child needs love and care.";}

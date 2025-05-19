#ifndef CHILD_H
#define CHILD_H

#include <string>

class Child
{
protected:
    std::string name;
    int age;

public:
    // Constructor
    Child();
    Child(const std::string& name, int age);

    //Getters
    std::string getName() const;
    int getAge() const;

    //Setters
    void setName(const std::string& name);
    void setAge(int age);

    // Method to display child information
    virtual std::string showNeeds();
    
};

#endif

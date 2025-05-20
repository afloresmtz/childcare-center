#indef SCHOOLCHILD_H
#define SCHOOLCHILD_H

// Incluye el header "Child"
#include "Child.h"

class SchoolChild:public Child{
    private:
    int readingLevel; // Atributo privado de readingLevel exlusivo de SchoolChild.

    public:
    SchoolChild(std::string name, int age, int level);
    std::string showNeeds() override; // Aplica "Override" (no sé cómo sería el término) al método establecido en la superclase.
    int getLevel(); // Getter
    void setLevel(int level); // Setter
};

#endif

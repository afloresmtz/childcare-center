#indef SCHOOLCHILD_H
#define SCHOOLCHILD_H

#include "Child.h"

class SchoolChild:public Child{
    private:
    int readingLevel;

    public:
    SchoolChild(std::string name, int age, int level);
    std::string showNeeds() override;
    int getLevel();
    void setLevel(int level);

};

#endif

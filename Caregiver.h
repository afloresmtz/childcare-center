#ifndef CAREGIVER_H
#define CAREGIVER_H

#include <string>
#include <list>
#include "Infant.h"
#include "Preschooler.h"
#include "SchoolChild.h"

class Caregiver {
private:
    string name;
    int yearsOfExp;
    list<Infant> infantList;
    list<Preschooler> preSchoolerList;
    list<SchoolChild> schoolChildList;
public:
    Caregiver(string name, int years, list<Infant> infantList, list<Preschooler> preSchoolerList, list<SchoolChild> schoolChildList);

    string displayReport();
};

#endif

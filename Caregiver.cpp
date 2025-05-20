#include "Caregiver.h"

#include <string>
#include <list>

#include "Infant.h"
#include "Preschooler.h"
#include "SchoolChild.h"

Caregiver::Caregiver(string name, int years, list<Infant> infantList, list<Preschooler> preSchoolerList, list<SchoolChild> schoolChildList) :
    name(name), yearsOfExp(years), infantList(infantList), preSchoolerList(preSchoolerList), schoolChildList(schoolChildList) {}

string Caregiver::displayReport() {
    string mainString;
    mainString.append("Caregiver: " + name + "\n");
    mainString.append("Years of experience: " + std::to_string(yearsOfExp) + "\n------------------\n");

    mainString.append("- Infants: \n\n");
    for (Infant currentInfant: infantList) {
        mainString.append("Name: " + currentInfant.getName() + "\n");
        mainString.append("Age:" + std::to_string(currentInfant.getAge()) + "\n");
        mainString.append("Needs: " + std::to_string(currentInfant.getBottles()) + " bottles per day\n");
        mainString.append("Requires frequent naps\n\n");
    }

    mainString.append("\n- Preschoolers: \n\n");
    for (Preschooler currentPreschooler: preSchoolerList) {
        mainString.append("Name: " + currentPreschooler.getName() + "\n");
        mainString.append("Age:" + to_string(currentPreschooler.getAge()) + "\n");
        mainString.append("Autonomy level: " + to_string(currentPreschooler.getAuto()) + "\n");
        mainString.append("Needs help with bathroom and guided play\n\n");
    }

    mainString.append("\n- School Children: \n\n");
    for (SchoolChild currentSchoolChild: schoolChildList) {
        mainString.append("Name: " + currentSchoolChild.getName() + "\n");
        mainString.append("Age:" + to_string(currentSchoolChild.getAge()) + "\n");
        mainString.append("Reading level: " + to_string(currentSchoolChild.getLevel()) + "\n");
        mainString.append("Needs educational activities and free play\n\n");
    }

    return mainString;
}

string Caregiver::displayReport(string name) {
    for (Infant currentInfant: infantList) {
        if(currentInfant.getName() == name) {
            return currentInfant.getName();
        }
    }
    for (Preschooler currentPreschooler: preSchoolerList) {
        if(currentPreschooler.getName() == name) {
            return currentPreschooler.getName();
        }
    }
    for (SchoolChild currentSchoolChild: schoolChildList) {
        if(currentSchoolChild.getName() == name) {
            return currentSchoolChild.getName();
        }
    }
}


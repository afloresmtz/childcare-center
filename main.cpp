#include "Caregiver.h"


int main() {
    // Create some sample children
    Infant infant1("Alice", 1, 5);
    Infant infant2("Bob", 2, 4);
    Preschooler preschooler1("Charlie", 3, 2);
    Preschooler preschooler2("Daisy", 4, 3);
    SchoolChild schoolChild1("Eve", 5, 1);
    SchoolChild schoolChild2("Frank", 6, 2);

    // Create lists of children
    list<Infant> infantList = {infant1, infant2};
    list<Preschooler> preSchoolerList = {preschooler1, preschooler2};
    list<SchoolChild> schoolChildList = {schoolChild1, schoolChild2};

    // Create a caregiver
    Caregiver caregiver("Grace", 10, infantList, preSchoolerList, schoolChildList);

    // Display the report
    cout << caregiver.displayReport() << endl;

    // Display report for a specific child
    std::string childName;
    cout << "Enter the name of the child to display their needs: ";
    cin >> childName;
    cout << caregiver.displayReport(childName) << endl;
    return 0;
}
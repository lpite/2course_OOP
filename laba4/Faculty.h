#ifndef FACULTY_H
#define FACULTY_H

#include <string>
#include <vector>

#include "Applicant.h"

class Faculty {
public:

    std::string name;
    int capacity;
    Faculty();
    Faculty(std::string n, int cap);

    void admitStudent(Applicant& applicant);

    void setCapacity(int capacity);

    void setCapacity(double capacity);

    void setBudget(double b);

    void setBudget(float b);
    Faculty getMe();

    void setName(Faculty cls);
    void saveToFIle(std::string fileName);
    void readFromFile(std::string fileName);
    void GEN();
private:
    std::string deanName;
    int foundationYear;
    bool isPublic;
    float budget;
    bool hasAccreditation;
    std::vector<Applicant> students;
};

#endif // FACULTY_H

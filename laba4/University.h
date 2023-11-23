#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include <vector>
#include "Faculty.h"

//class Faculty{};

class University
{
    public:
        University();

		void addFaculty(Faculty faculty);
		void showInfo();

    protected:

    private:
    std::string name;
    std::string city;
    std::string street;

    std::vector<Faculty> facultets;




};

#endif // UNIVERSITY_H

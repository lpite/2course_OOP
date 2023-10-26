#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include <vector>


class University
{
    public:
        University();
    protected:

    private:
    std::string name;
    std::string city;
    std::string street;

    std::vector<Faculty> facultets;


};

#endif // UNIVERSITY_H

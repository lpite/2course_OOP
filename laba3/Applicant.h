#ifndef APPLICANT_H
#define APPLICANT_H

#include <string>


class Applicant {
public:

    std::string name;
    int age;
    float entranceExamScore;
    Applicant();
    Applicant(const std::string& n, int a, float score);
    void displayInfo() ;
    float getEntranceExamScore();
    double getEntranceExamScore(double mult);
    void setEntranceExamScore(float score);
    void setEntranceExamScore(double score);

    Applicant getMe();
    void setName(Applicant cl);
    void saveToFIle(std::string fileName);
    void readFromFile(std::string fileName);

private:
    std::string address;
    int phoneNumber;
    bool hasRecommendationLetter;
    std::string previousSchool;
    bool isInternationalStudent;
};
#endif // APPLICANT_H

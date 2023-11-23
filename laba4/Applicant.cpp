#include "Applicant.h"
#include <iostream>
#include <fstream>

Applicant::Applicant()
{
    //ctor
}

Applicant::Applicant(const std::string& n, int a, float score): name(n), age(a), entranceExamScore(score){
}

void Applicant::displayInfo(){
     std::cout << "Name: " << name << ", Age: " << age << ", Entrance Exam Score: " << entranceExamScore << std::endl;
}

float Applicant::getEntranceExamScore(){
    return entranceExamScore;
}

double Applicant::getEntranceExamScore(double mult){
    return this->entranceExamScore * mult;
}

void Applicant::setEntranceExamScore(double score){
    this->entranceExamScore = score;
}
void Applicant::setEntranceExamScore(float score){
    this->entranceExamScore = score;
}

void Applicant::setName(Applicant cl){
    this->name = cl.name;
}

Applicant Applicant::getMe(){
    return *this;
}

void Applicant::saveToFIle(std::string fileName){
    std::ofstream file(fileName);
    file << this->name;
    file.close();

}
void Applicant::readFromFile(std::string fileName){
    std::ifstream file(fileName);
    file >> this->name;
    file.close();
}

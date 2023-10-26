#include "Faculty.h"

#include <Applicant.h>

#include <iostream>
#include <fstream>

Faculty::Faculty()
{

}

Faculty::Faculty(std::string n,int cap): name(n), capacity(cap){

}

void Faculty::admitStudent(Applicant &applicant){
    if (students.size() < capacity) {
            students.push_back(applicant);
            std::cout << applicant.name << " admitted to " << name << std::endl;
    }
}

Faculty Faculty::getMe(){
    return *this;
}

void Faculty::readFromFile(std::string fileName){
    std::ifstream file(fileName);
    file >> this->name;
    file.close();
}

void Faculty::saveToFIle(std::string fileName){
    std::ofstream file(fileName);
    file << this->name;
    file.close();
}

void Faculty::setBudget(double b){
    this->budget = b;
}
void Faculty::setBudget(float b){
    this->budget = b;
}

void Faculty::setCapacity(double cap){
    this->capacity = cap;
}

void Faculty::setCapacity(int cap){
    this->capacity = cap;
}

void Faculty::GEN(){
    int ran = rand()%10;
    int *arr = new int(ran);

    for(int i = 0;i<ran;i++){
        Applicant *app = new Applicant("",rand()%100,5.5);
        arr[i] = app->age;
        std::cout << arr[i] << std::endl;
    }

    int i, j;
    bool swapped;
    for (i = 0; i < ran - 1; i++) {
        swapped = false;
        for (j = 0; j < ran - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;

    }
    std::cout << "________________\n\n";

	for(int i = 0;i<ran;i++){
			std::cout << arr[i] << std::endl;
    }

}



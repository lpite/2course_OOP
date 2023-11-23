#include <iostream>
#include "University.h"

using namespace std;

University::University(){

}
void University::addFaculty(Faculty faculty){
	this->facultets.push_back(faculty);
}

void University::showInfo(){
	cout << "---------- University ----------";

	cout << "Name - " << this->name << '\n';
	cout << "City - " << this->city<< '\n';
	cout << "Name - " << this->street << '\n';
	for(int i = 0;i < this->facultets.size();i++){
		Faculty faculty = this->facultets[i];
		cout << "Faculty name -" << faculty.name << '\n';
	}

	cout << "--------------------------------";
};

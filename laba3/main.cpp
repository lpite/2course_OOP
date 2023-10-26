#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>

#include <Applicant.h>
#include <Faculty.h>

using namespace std;

int main(){
	srand(time(nullptr));

	Applicant ap1 = Applicant();
	Applicant ap2 = Applicant();
	Applicant ap3 = Applicant();
	Applicant ap4 = Applicant();
	Applicant ap5 = Applicant();

	Applicant arr1[5] = {ap1,ap2,ap3,ap4,ap5};

	Faculty *ap6 = new Faculty();
	auto ap7 = new Faculty();
	auto ap8 = new Faculty();
	auto ap9 = new Faculty();
	auto ap0 = new Faculty();

	ap6->admitStudent(ap1);

	Faculty *arr2[5] = {ap6,ap7,ap8,ap9,ap0};

	arr2[0]->GEN();

	return 0;
}

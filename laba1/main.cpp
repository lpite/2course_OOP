#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Result{
    string subject;
    double mark;
};
struct Student{
    string name;
    string surname;
    char course;
    string group;
    Result results[4];
};

void RW(Student& students){
	ofstream file1("INFO.DAT");
			if(file1.is_open()){
			file1.write((char*)&students,sizeof(Student));
	}
	file1.close();
}

void RW(string studentsString){
	ofstream file1("INFO.txt");
	if(file1.is_open()){
			file1 << studentsString << endl;
	}
	file1.close();

}

void RD(bool fuck){
	ifstream file1("INFO.txt");
	string line;
	if(file1.is_open()){
	while (std::getline(file1, line))
	{
				std::cout << line << std::endl;
	}
	//file1 << studentsString << endl;
	}

}

void RD(){

}

int main()
{
    Student students[] = {{
        "sasha",
        "ne sasha",
        '1',
        "23423",
        {
					{
						"math",
						34
					},
					{
						"math",
						34
					},
					{
						"math",
						34
					},
					{
						"math",
						34
					}
        }
    },{
        "fef",
        "pr",
        1,
        "23423",
        {
					{
						"test",
						33333333
					},
					{
						"math",
						31
					},
					{
						"math",
						32
					},
					{
						"math",
						12
					}
        }
    }};
		for(int i1 = 0; i1 < sizeof (students) / sizeof (Student) - 1;i1++){

		}
		for(int i = 0; i < sizeof (students) / sizeof (Student);i++){
			Student student = students[i];
			RW(student);
			double averageMark = 0;
			for(int j = 0; j < sizeof (student.results) / sizeof (Result);j++){
					double mark = student.results[j].mark;
					averageMark += mark;
			}
			averageMark = averageMark / 4;
			cout << averageMark << endl;
		}

    return 0;
}

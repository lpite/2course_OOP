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

void RW(string studentsString){
	ofstream file1("INFO.txt");
	if(file1.is_open()){
			file1 << studentsString << endl;
	}
	file1.close();

}

void RD(double text){
cout << "i hate";
	ifstream file1("INFO.txt");
	string line;
	if(file1.is_open()){
	while (getline(file1, line))
	{
        cout << line << std::endl;
	}
	//file1 << studentsString << endl;
	}

}

void RW(const Student students[], int size, const string& filename) {
    ofstream outFile(filename, ios::binary);

    if (outFile.is_open()) {
        // Write array of students to file
        outFile.write(reinterpret_cast<const char*>(students), sizeof(Student) * size);
        outFile.close();
        cout << "Students data written to binary file successfully." << endl;
    } else {
        cerr << "Unable to open file: " << filename << endl;
    }
}

void RD(const string& filename) {
    ifstream inFile(filename, ios::binary);

    if (inFile.is_open()) {
        inFile.seekg(0, ios::end);
        streampos fileSize = inFile.tellg();
        inFile.seekg(0, ios::beg);

        int numStudents = fileSize / sizeof(Student);

        Student* students = new Student[numStudents];
        inFile.read(reinterpret_cast<char*>(students), fileSize);

        for (int i = 0; i < numStudents - 1; ++i) {
					for (int j = 0; j < numStudents - i - 1; ++j) {
					double averageMark = 0;
					double nextAverageMark = 0;

							for (int j1 = 0; j1 < 4; ++j1) {
								averageMark += students[j].results[j1].mark;
							}
							averageMark /= 4;
							if(j+1 <= numStudents - i - 1){
								for (int j1 = 0; j1 < 4; ++j1) {
									nextAverageMark += students[j+1].results[j1].mark;
								}
							}
						nextAverageMark /= 4;
						cout << "av = " << averageMark << " next av = " << nextAverageMark << endl;
						if (averageMark < nextAverageMark) {

										swap(students[j], students[j + 1]);
						}
					}
				}
        for (int i = 0; i < numStudents; ++i) {
            cout << "Name: " << students[i].name << " "
                 << "Surname: " << students[i].surname << " "
                 << "Course: " << students[i].course << " "
                 << "Group: " << students[i].group << endl;
						double averageMark = 0;
            for (int j = 0; j < 4; ++j) {
								averageMark += students[i].results[j].mark;
                cout << "Subject: " << students[i].results[j].subject << " "
                     << "Mark: " << students[i].results[j].mark << endl;
            }
            averageMark /= 4;
						cout << "Average mark:" << averageMark;
            cout << endl;
        }

        inFile.close();
    } else {
        cerr << "Unable to open file: " << filename << endl;
    }
}

int main()
{
    Student students[] = {
			{"sasha","ne sasha",'1',"23423",{{"math",34},{"math",34},{"math",34},{"math",34}}},
			{"fef","pr",'5',"23423",{{"test",12},{"math",12},{"math",12},{"math",12}}},
			{"fef","pr",'5',"23423",{{"test",31},{"math",31},{"math",31},{"math",31}}},
			{"fef","pr",'5',"23423",{{"test",40},{"math",40},{"math",40},{"math",40}}},
			{"fef","pr",'5',"23423",{{"test",26},{"math",26},{"math",26},{"math",26}}},
			{"fef","pr",'5',"23423",{{"test",25},{"math",25},{"math",25},{"math",25}}},
    };
		RW(students, sizeof(students)/sizeof(Student), "studentsArray.bin");
		RD("studentsArray.bin");
    return 0;
}

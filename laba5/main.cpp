#include <iostream>
#include <vector>

#include "models/Faculty.cpp"
#include "models/Student.cpp"
#include "models/University.cpp"
#include "models/Templated.cpp"


using namespace std;

void Service(Student *student, string fileName) {
  student->writeToFile(student, fileName);
  student->readFromFile(student);
}

int main() {
  Student *en = new Student;
  std::vector<Student> stat;
  std::vector<Student *> dyn;

  for (int i = 0; i < 5; i++) {
    Student student;
    Student *dynStudent = new Student;
    stat.push_back(student);
    dyn.push_back(dynStudent);
  }
  Service(en, "file");

  Entity *ent;

  cout << "menu" << endl;

  Student *stud;

  cout << " create Student 0 \n create Faculty 1 \n create University 2\n";

  int index = -1;

  cin >> index;
  switch (index) {
  case 0:
    ent = new Student;
    ent->showInfo();

    break;

  case 1:
    ent = new Faculty;
    ent->showInfo();

    break;
  case 2:
    ent = new University();
    ent->showInfo();

    break;

  default:
    cout << "no item selected!!!";
    break;
  }



  Templated<string,int,int,int,int> *a = new Templated<string,int,int,int,int> ("1");
  return 0;
}
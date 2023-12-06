#include <iostream>
#include <vector>

#include "models/Faculty.cpp"
#include "models/Student.cpp"
#include "models/University.cpp"

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

  ent = new Student;
  ent->showInfo();

  ent = new Faculty;
  ent->showInfo();

  ent = new University();
  ent->showInfo();

  return 0;
}
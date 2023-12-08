#include "./Entity.cpp"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Student : public Entity {
public:
  virtual ~Student() { cout << "destr Student \n"; }
  void showInfo() override { cout << "STUDENT\n"; }
  void writeToFile(Entity *ent, string fileName) override {
    try {
      ofstream file(fileName);
      file << "student\n";
      file << this->id;
      file.close();
    } catch (const std::ifstream::failure &e) {
      std::cerr << "Exception opening/reading/closing the file: " << e.what()
                << std::endl;
    } catch (const std::ios_base::failure &e) {
      std::cerr << "IO base exception: " << e.what() << std::endl;
    } catch (const std::exception &e) {
      std::cerr << "Generic exception occurred: " << e.what() << std::endl;
    }
  }
  void readFromFile(Entity *ent) {}

  bool operator<(const Student &other) const { return id < other.id; }

  bool operator==(const Student &other) const {
    return id == other.id;
  }
};
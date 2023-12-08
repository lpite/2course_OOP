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

  Student &operator++() {
    std::cout << "prefix ++ \n";
    this->id++;
    return *this;
  }
  Student operator++(int) {
    std::cout << "postfix ++ \n";
    return *this;
    this->id++;
  }
  Student &operator--() {
    std::cout << "prefix -- \n";
    this->id--;
    return *this;
  }
  Student operator--(int) {
    std::cout << "postfix -- \n";

    return *this;
    this->id--;
  }

  Student operator-(int num) {
    std::cout << "minus - \n";
    this->id = this->id - num;
    return *this;
  }

  Student operator+(int num) {
    std::cout << "plus + \n";
    this->id = this->id + num;

    return *this;
  }

  Student operator*(int num) {
    std::cout << "myltiply * \n";
    this->id = this->id * num;
    return *this;
  }
  void operator+=(int num) {
    std::cout << "+= \n";
    this->id -= num;
  }
  void operator-=(int num) {
    std::cout << "-= \n";
    this->id -= num;
  }
  Student operator*=(int num) {
    std::cout << "*= \n";
    this->id *= num;
    return *this;
  }
  Student operator=(int num) {
    std::cout << "=  \n";
    this->id = num;
    return *this;
  }

  int operator[](int num) {
    if (this->id - num > 0) {
      return this->id - num;
    }
    return 0;
  }

  template <typename T> void printSomethning(T a) { std::cout << a << "\n"; }
};
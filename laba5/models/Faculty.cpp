#pragma once

#include "Entity.cpp"

#include <fstream>
#include <iostream>
#include <string>

class Faculty:public Entity{
  void showInfo() override{
    std::cout << "Faculty\n";
  }
  void writeToFile(Entity *ent, std::string fileName) override{
    std::ofstream file(fileName);
    file << "faculty\n";
    file << this->id;
    file.close();
  }
  void readFromFile(Entity *ent){

  }
};
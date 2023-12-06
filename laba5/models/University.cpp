#include <iostream>

#include "Faculty.cpp"
#include "Entity.cpp"

class University : public Entity {
  Faculty facultets[];
  void showInfo() override{
    std::cout << "University\n";
  }
  void writeToFile(Entity *ent, std::string) override{

  }
  void readFromFile(Entity *ent) override{
    
  }
};
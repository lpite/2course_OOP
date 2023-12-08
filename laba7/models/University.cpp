#include <iostream>

#include "Entity.cpp"
#include "Faculty.cpp"

class University : public Entity {
  Faculty facultets[];
  void showInfo() override { std::cout << "University\n"; }
  void writeToFile(Entity *ent, std::string) override {}
  void readFromFile(Entity *ent) {}
};

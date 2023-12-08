#pragma once
#include <string>

class Entity {
public:
  int id = 0;
  virtual void showInfo() = 0;
  void readFromFile(Entity *ent){};
  virtual void writeToFile(Entity *ent, std::string) = 0;
};
#pragma once
#include <string>

class Entity {
public:
  int id = 0;
  virtual void showInfo() = 0;
  virtual void readFromFile(Entity *ent) = 0;
  virtual void writeToFile(Entity *ent,std::string) = 0;
};
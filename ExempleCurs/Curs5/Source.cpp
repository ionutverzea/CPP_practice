#include "Header.h"

bool Person::setName(std::string inName)
{
  this->name = inName;
  return true;
}

bool Person::setAge(const int inAge)    // need to use access specifier to point to the method declaration in class
{
  age = inAge;
  return true;
}

//void setAge(int myAge)
//{}
#pragma once

#include <string>
#include <iostream>
// base class / derived class                             ok
// virtual method                                         ok
// abstract classes (usually APIs)                        ok

// diamond problem - usually an object inheritance issue from multipe base classes          ok

// type conversion, casting of objects or pointers to them

using namespace std;      // not recommended here, can be added in source file; and here we use it explicit with variables

// base Person
class Person
{
public:
  Person() 
  {
    name = "";
    age = -1;
  };
  ~Person() {};

  Person(std::string inName, int inAge) : name(inName), age(inAge) {}
  bool setName(std::string inName);         // homework: use std::string&
  bool setAge(const int inAge);

  virtual bool getInfo() = 0;                   // with virtual, we show this method can be overriden in derived classes  
  //{                                       // with implementation commented out, we get an abstract class
  //  std::cout << name << " age " << std::endl;
  //  return true;
  //}

private:
  string name;
  int age;
};

// derived Student, Teacher
class Student : public Person
{
public:
  Student() = default;      // use default constructor, no body will be supplied
  ~Student() {};

  Student(std::string name, int age, std::string inUniversity) : university(inUniversity), Person(name, age) {}

  void setUniveristy(std::string inUniversity)
  {
    this->university = inUniversity;
  }

  bool getInfo()
  {
    std::cout << university << std::endl;
    return true;
  }
private:
  string university;
};

// derived (multiple) Employee
class Employee : public Person, public Student
{
public:
  Employee() = default;
  ~Employee() {};

  Employee(std::string name, int age, std::string universitate, std::string inEmployer) :
    employer(inEmployer), Student(name, age, universitate)
  {};

  void setEmployer(std::string inEmployer)
  {
    this->employer = inEmployer;
  }

  bool getInfo()
  {
    std::cout << employer << std::endl;
    return true;
  }

private:
  string employer;
};
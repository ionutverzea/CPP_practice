#include <iostream>
#include <string>
#include "Header.h"

int main()
{
  std::cout << "Hello world!";

  // define objects of base and derived classes
  // Person newPerson;    // when Person is an abstract class we can't create objects of it.
  Student newStudent;

  std::string myName = "Mihai";

 // newPerson.setAge(19);
 // newPerson.setName(myName);//std::string("Mihai"));    

  newStudent.setAge(21);
  newStudent.setName("Andrei");

  newStudent.getInfo();
//  newPerson.getInfo();      // when person is an abstract class, we can't call pure virtual methods because they don't have an implementation

  Employee newHired("George", 24, "Transilvania", "Siemens");
  // newHired.getInfo(); // in this case diamond problem manifests, need to tell which getInfo() to use
  //newHired.Person::getInfo();   // can use either of them
  newHired.Student::getInfo();        
  newHired.getInfo();

  return 0;
}
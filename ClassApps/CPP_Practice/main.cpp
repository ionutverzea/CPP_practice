#include "Algorithms.h"
#include "../MemoryManagement/MemoryManagement.h"
#include "../Class_4_OOP/Class_4.h"

#include <iostream>

void main()
{
	// Class 4
	Person myPerson;
	myPerson.setPerson("Ion", "Popescu", 22);

	std::cout << myPerson.getName();
	myPerson.setAge(-1);

	// Class 3
	myPointers();

	myMatrix();

	workingWithStructs();

	if (JumpConditions())
		std::cout << "call was successfull" << std::endl;
	else
		std::cout << "error executing the method " << std::endl ;

	FooBarApp(30);

	std::cout << "Hello world!";
}

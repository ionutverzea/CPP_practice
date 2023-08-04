#include "Algorithms.h"
#include "../MemoryManagement/MemoryManagement.h"
#include <iostream>

void main()
{
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

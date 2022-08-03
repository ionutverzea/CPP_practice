
#include "Header.h"

#include <iostream>

using namespace std;


int main()
{
  /*
  - new / delete
  - stack/heap
  - pointers
  - void
  - int/double
  - array/vector
  */

  int a;
  int b;

  a = 5;
  b = 7;

  int rezultat = sum(a, b);

//  cout << sum;    // show address where sum() was allocated, programmers error
  cout << rezultat;

  if (sumB(a, b, rezultat))
    cout << rezultat;
  else
    cout << "could not compute sum";

  a = 9;
  int* pA = &a;
  sumB(*pA, b, rezultat);

 // double* pC = pA;    // unable to make implicit cast, explicit cast is required
 // double* pC = static_cast<double*>(pA);        // homework : how to cast from a pointer type to another one.

  // void pointers
  void* pVoid;
  pVoid = pA;

  cout << pVoid << " " << &pVoid; 

  // array with new/delete
  // array with constant size, defined at programming stage by user
  const int mySize = 12;
  int myArray[mySize];

  // array dinamically allocated
  int* myArrayDynamic = new int[mySize];      // array dynamically allocated
  int* pSimpleExample = new int;              // simple pointer allocated dynamically

  for (int i = 0; i < mySize; ++i)
  {
    myArray[i] = i;
    myArrayDynamic[i] = i;
  }

  int* firstElement = &myArrayDynamic[0];

  for (int i = 0; i < mySize; ++i)
  {
    std::cout << myArray[i] << " " << myArrayDynamic[i] << std::endl;
    // acces array elements by using first element address
    std::cout << firstElement << " " << *firstElement << std::endl;
    firstElement++;
  }

  // remember to free memory dinamycally allocated!
  delete[] myArrayDynamic;
  delete pSimpleExample;

  return 0;
}



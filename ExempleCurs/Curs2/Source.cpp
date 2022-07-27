
#include "C2_Examples.h"
#include <iostream>

using namespace std;


int main()
{
  // call before defining method prototype
  int rezultat = suma(1, 3);
  cout << rezultat << endl;
  
  // if's
  bool status = false;
  status = sumaPar(1, 3, rezultat);
  status = sumaPar(2, 6, rezultat);
  
  // switch case
  Colors colorResult;
  status = changeColor(Colors::Yellow, colorResult);

  int myResults[5] = { 0, 0, 0, 0, 0};
  int resultIndex = 0;
  int customInit[5] = { 0 };

  // while do
  status = sumaInterval(1, 10, rezultat);
  std::cout << "Suma numerelor while-do: " << rezultat << std::endl;
  myResults[resultIndex] = rezultat;
  resultIndex++;

  // do while
  status = sumaInterval_DoWhile(1, 10, rezultat);
  std::cout << "Suma numerelor do-while: " << rezultat << std::endl;
  myResults[resultIndex] = rezultat;
  resultIndex++;

  // for loop
  status = sumaInterval_For(1, 10, rezultat);
  std::cout << "Suma numerelor for: " << rezultat << std::endl;
  myResults[resultIndex] = rezultat;
  resultIndex++;

  // custom for loop with breaks and continues
  status = sumaInterval_For_particularizat(1, 10, rezultat);
  std::cout << "Suma numerelor for custom: " << rezultat << std::endl;
  myResults[resultIndex] = rezultat;
  resultIndex++;

  for (int index = 0; index < 5; index++)
  {
    std::cout << " Valori stocate: " << myResults[index];
  }
  std::cout << std::endl;

  Book myBook;
  Book newBook = { 0, "Jules Vernes", "Calatorie spre centrul pamantului", false };

  std::cout << myBook.autor << " " << myBook.autor.length() << std::endl;
  std::cout << newBook.autor << std::endl;

  return 0;
}



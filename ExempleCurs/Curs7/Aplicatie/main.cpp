#include <iostream>
#include "LibHeader.h"

int main()
{
  std::cout << "Hello world!" << std::endl;

  Automobil* myAuto = new Automobil("CT23AUG", "Dacia", 600, "Logan", VehicleColors::ROSU);
  Automobil* myNewAuto = new Automobil("BV24AUG", "Fiat", 1600, "Tipo", ALB);

  myAuto->printInfo();
  myNewAuto->printInfo();

  delete myAuto;
  delete myNewAuto;

  return 0;
}
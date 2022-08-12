
#include "LibHeader.h"
#include <iostream>

std::string Vehicul::getType()
{
  return tip;
}


VehicleColors Vehicul::getColor()
{
  return this->culoare;
}   // end of getColor()

bool Automobil::printInfo()
{
  if (this->capacitateCilindrica <= 0)      // all information we use as input in methods, should be checked and validated for good values
    return false;

  std::cout << this->registration << this->getType()
    << this->capacitateCilindrica << std::endl;

  return true;
}

#pragma once

#include <string>

// export items from library
#ifdef LIBRARY_EXPORT
#define VEHICLE_API __declspec(dllexport)
#else
#define VEHICLE_API __declspec(dllimport)
#endif


// clasa vehicul
// - get/set
// - tip, culoare

enum VEHICLE_API VehicleColors { ALB = 5, NEGRU, ROSU = 12, GALBEN, VERDE };

class Vehicul
{
public:
  Vehicul() = default;
  ~Vehicul() = default;
  Vehicul(std::string inType, VehicleColors inColor) : tip(inType), culoare(inColor) 
  {}
  std::string getType();
  VehicleColors getColor();
  virtual bool printInfo() = 0;       // example of pure virtual methods, with this the class is now abstract
private:
  std::string tip;
  VehicleColors culoare;
};

// derivat - automobil, motocicleta, bicicleta
// - nr inmatriculare
// - tip
// - capacitate cilindrica

class VEHICLE_API Automobil : Vehicul
{
public:
  Automobil() = default;
  ~Automobil() = default;
  // custom constructor with initializer list
  Automobil(std::string inRegistration, 
    std::string inModel, 
    int inCC, 
    std::string type, 
    VehicleColors color) : Vehicul(type, color) 
  {
    registration = inRegistration;
    model = inModel;
    capacitateCilindrica = inCC;
  }
  bool printInfo();
private:
  std::string registration;
  std::string model;
  int capacitateCilindrica;
};

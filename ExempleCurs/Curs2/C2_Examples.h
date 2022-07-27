#pragma once

#include <string>

// define method prototype, will be implemented later on
int suma(int a, int b);

bool sumaPar(const int a, const int b, int& result);

enum Colors {Blue, White, Green, Yellow};

bool changeColor(const Colors currentCollor, Colors& newCollor);

bool sumaInterval(const int start, const int end, int& result);

bool sumaInterval_DoWhile(const int start, const int end, int& result);

bool sumaInterval_For(const int start, const int end, int& result);

bool sumaInterval_For_particularizat(const int start, const int end, int& result);

struct Book
{
  int cod_ISBN;
  std::string autor;
  std::string titlu;
  bool disponibilLaRaft;
};

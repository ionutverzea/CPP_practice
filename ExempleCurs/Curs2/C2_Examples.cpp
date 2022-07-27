#include "C2_Examples.h" 
#include <iostream>

// method implementation, definition found in upper section of page
int suma(int a, int b)
{
  int sum = a + b;
  //  return (a + b);
  return sum;
}

bool sumaPar(const int a, const int b, int& result)
{
  if (a % 2 == 0 && b % 2 == 0)
    result = a + b;
  else
  {
    result = 0;
    return false;
  }

  return true;
}

bool changeColor(const Colors currentColor, Colors& newColor)
{

  switch (currentColor)
  {
    case Colors::Blue:
      std::cout << "Current color:" << currentColor << std::endl;
      newColor = currentColor;
    break;

    case Colors::Yellow:
      newColor = currentColor;
    // break;                     // commenting this break will get next cases to be executed

    case Colors::Green:
      newColor = Colors::Green;
      break;

  default:
    break;
  }

  return true;
}


bool sumaInterval(const int start, const int end, int& result)
{
  result = 0;
  int current = start;
  while (current <= end)
  {
    result += current;
    current++;
  }

  return true;
}


bool sumaInterval_DoWhile(const int start, const int end, int& result)
{
  result = 0;
  int current = start;
  do
  {
    result += current;
    current++;
  } while (current <= end);

  return true;
}


bool sumaInterval_For(const int start, const int end, int& result)
{
  result = 0;
  int current = start;
  for(int index = start; index <= end; ++index)
  {
    result += current;
    current++;
  }

  return true;
}

bool sumaInterval_For_particularizat(const int start, const int end, int& result)
{
  result = 0;
  int current = start;
  for (int index = start; index <= end; ++index)
  {
    if (index % 2 == 0)
      result += current;
    else
      continue;
    current++;
    if (current == 9)
      break;
  }

  return true;
}
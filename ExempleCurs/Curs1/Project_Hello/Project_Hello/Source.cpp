#include <string>
#include <iostream>

bool printMessage(std::string message)
{
  // validate input data!
  if (message.size() <= 0)
    return false;

  std::cout << message << std::endl;
  return true;
}

using namespace std;

void main()
{
  string myMessage = "Hello World!";
  //std::cout << message << std::endl;
  
  if (!printMessage(myMessage))
    cout << "Could not print message!" << endl;

  std::string wrongMessage;
  if(!printMessage(wrongMessage))
    std::cout << "Could not print message!" << std::endl;

}
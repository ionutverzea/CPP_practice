#include <iostream>
#include <string>
#include <vector>
#include <map>

// string - append, assign, copy
// vector - push back, emplace back, copy sortc
// templates - class - 
// map - indexing by different methods
// iterating through containers

#define MY_SIZE 27
const size_t DESTINATION_SIZE = 100;


using namespace std;

// examples with upcasting/downcasting - pet class
void mapOperations();
void stringOperations();
void vectorOperations();

void myMethod(const std::string& myParameter) {};


int main()
{
  myMethod("custom string");
  std::cout << "Hello world" << std::endl;

  mapOperations();
  stringOperations();
  vectorOperations();

  return 0;
}

void mapOperations()
{
  std::map<int, std::string> myMap = { {1, "one"}, { 3, "third"}, {4, "mere"} };
  std::map<int, string>::iterator myBegin = myMap.begin();
  std::map<int, string>::iterator myEnd = myMap.end();

  for (std::map<int, string>::iterator index = myBegin; index != myMap.end(); index++)
  {
    cout << index->second; //myMap(index)->second();
  }

}

void stringOperations()
{
    

  // string - append, assign, copy
  string source = "abcdef";
  string destination;

  destination.reserve(DESTINATION_SIZE);
  //destination.resize(12,'\0');        // resize the string to new size and initialize all values with given char

  destination.append(source);

  destination.append(source.c_str());

  // define some iterators
  std::string::iterator start = source.begin();
  std::string::iterator end = start + 3;
  std::string::iterator insertionPoint = destination.begin() + 2;

  copy(start, end, insertionPoint);
  //copy(source.begin(), source.end(), destination.end());

  int position = destination.find('f', sizeof(char));
  destination.replace(position, position + 1, "F");


  cout << source << endl
    << destination << endl;
}


void vectorOperations()
{
  vector<int> myVector(DESTINATION_SIZE, -3);
  vector<float> myFVector = {1, 3, 5, 6, 7, 8};

  myFVector.push_back(10);
  myFVector.emplace_back(12);
  myFVector.pop_back();

  for (size_t i = 0; i < myVector.size(); i++)
  {
    std::cout << myVector[i] << " "
      << myVector.at(i) << " ";
  }

  myVector.clear();
}

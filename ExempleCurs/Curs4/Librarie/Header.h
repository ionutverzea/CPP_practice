#pragma once

#ifdef LIBRARY_EXPORT     // add this definition into "Librarie" project properties under c/c++ -> Preprocesor -> Preprocesor definitions 
  #define LIBRARY_API __declspec(dllexport)
#else
  #define LIBRARY_API __declspec(dllimport)
#endif

#include <string>

//using namespace std;    // try to avoid using namespaces in headers

// export from library

// clasa book                                     ok
// public, private                                ok
// static - contor                                homework
// afissare                                       ok - metoda statica pentru afisare
// constructor/destructor, constructor custom     ok
// constructor initialization list                ok

class LIBRARY_API Book {
  
  public:
    Book();
    ~Book();
    // custom constructor:
    Book(std::string author, std::string title, int id);
    bool setAuthor(const std::string& author);    // const shows that input data is not changes inside the method
    bool setTitle(const std::string& title);      // for performance use reference to complex or large data
    bool setID(const int id);
    bool static printBookInfo(const Book inBook);
    static int numberOfBooks()                    // declare a method that will let us know the number of instances we have on Book class
    {
      return index;
    }
  private:
    static int index;
    std::string mAuthor;
    std::string mTitle;
    int mID;
};

#include "Header.h"
#include <iostream>
#include <vector>

int main()
{
  // implements app
  Book myBook;

  /*myBook.mAuthor = "Jules Verne";                            // this works with member variables being public
  myBook.mTitle = "Calatorie spre centrul pamantului";
  myBook.mID = 1;*/ 
  myBook.setAuthor("Jules Verne");                              // when member data is protected/private, we need to use other means to get to our information
  myBook.setTitle("Calatorie spre centrul pamantului");
  myBook.setID(1);

  myBook.printBookInfo(myBook);   // not usual, but it works for accesing data.
  Book::printBookInfo(myBook);

  std::vector<Book> myBooks;

  myBooks.push_back(myBook);

  Book secondBook("Andrei", "Cartea lui Andrei", 2);
  myBooks.push_back(secondBook);
  size_t numberOfBooks = myBooks.size();
  //for (int i = 0; i < myBooks.size(); i++)
  for (int i = 0; i < numberOfBooks; i++)   // slightly faster than example above
  {
    Book::printBookInfo(myBooks[i]);
  }

  std::cout << "Number of instances of  Book class: " << Book::numberOfBooks() << std::endl;
  return 0;
}



#include "Header.h"
#include <iostream>

int Book::index;      // homework: update book index use so that is shows how many instances of book objects we have.

Book::Book()
{
  Book::index++;
}

// custom constructor with initializer list
// using initializer list is usually faster then updating values inside the method
Book::Book(std::string author, std::string title, int id) : mAuthor(author), mTitle(title), mID(id)
{
  this->mAuthor = author;
  this->mTitle = title;
  this->mID = id;
  
  Book::index++;
}


Book::~Book()
{
  this->mAuthor.clear();      // we can use this pointer to member variables
  this->mTitle.clear();
  mID = 0;                    // or we can directly access member variables

  if (Book::index != 0)             // decrement index used to store number of objects of this types
    Book::index--;
}

bool Book::setAuthor(const std::string& author)
{
  if (author.size() != 0)
    mAuthor = author;
  else
    return false;

  return true;
}

bool Book::setTitle(const std::string& title)
{
  if (!title.size() != 0)
    return false;

  this->mTitle = title;
  return true;
}

bool Book::setID(const int id)
{
  this->mID = id;             // it is recommended to check input values to be correct or to have expected values
  return true;
}

// display information on input data
bool Book::printBookInfo(const Book inBook)
{
  std::cout << inBook.mAuthor << " "
    << inBook.mTitle << " "
    << inBook.mID << " "
    << Book::index << std::endl;

  
  return true;
}
#pragma once
#include <string>

// export functions and data from library
#ifdef Class_4_OOP_EXPORT
#define Class_4_API __declspec(dllexport)
#else
#define Class_4_API __declspec(dllimport)
#endif

// first iteration, no constructor or destructor implemented, uses default ones
// no access permisions set (public, private, protected)
class Class_4_API Person
{
private:
	std::string mName;
	std::string mSurname;
	int mAge;
public:
	Person()
	{
		mName = "";
		mSurname = "";
		mAge = 0;
	};
	Person(std::string name, std::string surname, int age);

	void setPerson(const std::string name, const std::string surname, const int age);
	std::string getName();
	void setName(std::string name);

	bool setAge(int age);

};



#include <iostream>

int power(int number, unsigned int y)
{
	if (y == 0)
		return 1;
	if (y % 2 == 0)
		return power(number, y / 2) * power(number, y / 2);
	return number * power(number, y / 2) * power(number, y / 2);
}
int order(int number)
{
	int n = 0;
	while (number)
	{
		n++;
		number = number / 10;
	}
	return n;
}

bool isArmstrongNumber(int number)
{
	int n = order(number);
	int temp = number, sum = 0;


	while (temp)
	{

		int r = temp % 10;
		sum = sum + power(r, n);
		temp = temp / 10;
	}
	// TODO: implement some functionality to see if this number is an armstrong number

	return (sum == number);
}

void printIsArmstrong(int number)
{
		if (isArmstrongNumber(number))
		{
			std::cout << "Armstrong" << std::endl;
		}
		else
		{
			std::cout << "NOT Armstrong" << std::endl;
		}
}

void ArmstrongString(int number)
{
	

}

int main(int argc, char* argv[])
{
	// What is this program expected to do?
	// - Shows whether an argument is an armstrong number.
	// (what?)
	// -	An Armstrong number is a number that is equal to the sum of cubes of its digits.
	//		For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
	//		Let's try to understand why 153 is an Armstrong number:
	//			1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
	//
	// How to launch it?
	// - Execute the binary and pass a parameter to it?
	// - E.g. Open CMD in bin/Debug or bin/Release
	//		  03_armstrong.exe 1		=> Output: Armstrong
	//		  03_armstrong.exe 2		=> Output: NOT Armstrong
	//		  03_armstrong.exe 			=> Output: No program arguments found.
	//		  03_armstrong.exe ABC		=> Undefined output (do whatever).
	//		  03_armstrong.exe 153		=> Output: Armstrong
	//		  03_armstrong.exe 154		=> Output: NOT Armstrong
	//

	// Make sure there are some program arguments available.
	if (argc <= 1)
	{
		std::cout << "No program arguments found." << std::endl;
		return 1;
	}

	int readNumber = 0;
	// Get the first argument
	std::string argumentAsString = argv[1];
	const char* argumentAsCharArray = argumentAsString.c_str();
	
	readNumber = atoi(argumentAsCharArray);

	// TODO: read number / cast to integer
for (int i = 0; i < strlen(argumentAsCharArray); i++)
	{
		if (isdigit(argumentAsCharArray[i]))
		{
			printIsArmstrong(readNumber);
			break;
		}
		else 
		{
			std::cout << "it didin't take expected input" << std::endl;
			break;
		}
	}
	return 0;
}
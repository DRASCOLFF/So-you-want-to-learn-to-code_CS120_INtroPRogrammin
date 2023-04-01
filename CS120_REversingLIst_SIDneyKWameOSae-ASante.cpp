#include <iostream>
using namespace std;

int main()
{
	// Declare the set of variables, integer which will hold the integer, reversed will eventually be the reversed integer, and remainder
	int integer, reversed = 0, remainder;

	//Describe the program
	
	cout << "This program reverses the digits of an integer." <<endl;

	cout << "Enter an integer: ";
	cin >> integer;
	
	// Create a while loop that remains true until the integer is equal to 0
	while(integer != 0)
		{
	
			// The process of reversing the number starts off by using modulos to get the last digit and then storing it and then continously adding the rest by multipling the stored value by 10
			remainder = integer % 10;
			reversed = reversed * 10 + remainder;
			integer /= 10;
		}

  cout << "The reversed number is " << reversed <<".";

  
}
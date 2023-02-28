#include <iostream>
using namespace std;

int main()
{
	// Create four integer variables, initial_number for the the number itself, number which is the number which will be operated on sum which will eventually be the sum of digits, and digit_holder which will hold the individual digits before adding them
   int initial_number;
   int number;
   int sum = 0;
   int digit_holder;
   
	// Describe the program
	cout << "This program sums the digits of an integer." <<endl;
	
	//Prompt the user to enter an integer
   
   cout << "Enter an integer: ";
   cin >> initial_number;
   
   //Assign the initial number to the variable number
   number = initial_number;
   
   // Create a while loop that becomes false when number is less than 0. The way this program works is by first finding the remaining digit after dividing the number by 10 in order to get the smallest digit and stores it in the variable digit_holder. It then divides the number by 10 and repeats the modulo division. Since the values are integers, whole numbers will be stored until it gets to a value which is 0 while in reality it's a number which is less than one but greater than 0
   while ( number > 0 )
   {
	   digit_holder = number % 10;
	   
	   sum = sum + digit_holder;
	   
	   number = number / 10;
   }

	// Out put the result for example if the user inputs 431 it should output "The sum of the digits in 431 is 8."
	cout << "The sum of the digits in " <<initial_number <<" is " << sum <<".";

		
}
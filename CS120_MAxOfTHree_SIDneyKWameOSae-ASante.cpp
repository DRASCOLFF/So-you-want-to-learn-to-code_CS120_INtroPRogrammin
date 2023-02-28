#include <iostream>
using namespace std;

int main()
{
    // Create three integer  variables: first_integer, second_integer, third_integer
	int first_integer;
    int second_integer;
	int third_integer;

	
	cout <<"This program identifies the largest of three numbers." <<endl;
	cout <<endl;

    // Prompt the user to enter the first intger
    cout << "Enter integer: ";
	cin >> first_integer;
	
	//Prompt the user to enter the second integer
	cout << "Enter integer: ";
	cin >> second_integer;
	
//Prompt the user to enter the third integer
	cout << "Enter integer: ";
	cin >> third_integer;
	cout <<endl;

    // Create a conditional statement for the scenario where the first integer is greater than the second and third	
	if (first_integer > second_integer && first_integer > third_integer)
	{
		//Output the result stating the first integer was the largest, e.g.l if the first integer = 7, your second integer = 2 and your third integer = 3, your program should print " The largest number is 7"
		cout << "The largest number is " << first_integer << "." <<endl;
	}
	
	 // Create a conditional statement for the scenario where the second integer is greater than the first and third	
	if (second_integer > first_integer && second_integer > third_integer)
	{
		//Output the result stating the second integer was the largest, e.g.l if the first integer = 2, your second integer = 4 and your third integer = 1, your program should print " The largest number is 4"
		cout << "The largest number is " << second_integer << "." <<endl;
	}
	
	 // Create a conditional statement for the scenario where the third integer is greater than the first and second	
	if (third_integer > first_integer && third_integer > first_integer)
	{
		//Output the result stating the third integer was the largest, e.g.l if the first integer = 5, your second integer = 9 and your third integer = 13, your program should print " The largest number is 13"
		cout << "The largest number is " << third_integer << "." <<endl;
	}

	// Create a conditional statement for the scenario where the first integer is the same as the the second but greater than the third	
	if (first_integer == second_integer && first_integer > third_integer)
	{
		//Output the result stating the first integer and second integer was the largest, e.g.l if the first integer = 7, your second integer = 2 and your third integer = 3, your program should print " The largest number is 7"
		cout << "The largest number is " << first_integer << "." <<endl;
	}

	// Create a conditional statement for the scenario where the first integer is the same as the the third but greater than the third	
	if (first_integer == third_integer && first_integer > second_integer)
	{
		//Output the result stating the first integer and third integer was the largest, e.g.l if the first integer = 7, your second integer = 2 and your third integer = 3, your program should print " The largest number is 7"
		cout << "The largest number is " << first_integer << "." <<endl;
	}
	
	// Create a conditional statement for the scenario where the first integer is the same as the second and third	
	if (first_integer == third_integer && first_integer == second_integer)
	{
		//Output the result stating the first integer and third integer was the largest, e.g.l if the first integer = 7, your second integer = 2 and your third integer = 3, your program should print " The largest number is 7"
		cout << "The largest number is " << first_integer << "." <<endl;
	}
}
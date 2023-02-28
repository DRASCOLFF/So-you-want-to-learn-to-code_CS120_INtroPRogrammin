#include <iostream>
using namespace std;

int main()
{
    // Create two integer variables: first_integer, second_integer
	int first_integer;
    int second_integer;

	
	cout <<"This program determines the relationship between two input numbers." <<endl;

    // Prompt the user to enter the first intger
    cout << "Enter the first integer: ";
	cin >> first_integer;
	
	//Prompt the user to enter the second integer
	cout << "Enter the second integer: ";
	cin >> second_integer;


    // Create a conditional statement for the scenario where the first integer is greater than the second	
	if (first_integer > second_integer)
	{
		//Output the result stating the first integer was greater, e.g.l if the first integer = 5 and your second integer = 2, your program should print " 5 is greater than 2"
		cout << first_integer << " is greater than " << second_integer <<endl;
	}
	
	 // Create a conditional statement for the scenario where the first integer is less than the second	
	else if (first_integer < second_integer)
	{
		//Output the result stating the first integer was less than, e.g.l if the first integer = 7 and your second integer = 8, your program should print " 7 is less than 8"
		cout << first_integer << " is less than " << second_integer <<endl;
	}
	
	 // Create a conditional statement for the scenario where the first integer is equal to the second	
	else if (first_integer == second_integer)
	{
		//Output the result stating the first integer was less than, e.g.l if the first integer = 7 and your second integer = 8, your program should print " 7 is less than 8"
		cout << first_integer << " is equal to " << second_integer <<endl;
	}


}
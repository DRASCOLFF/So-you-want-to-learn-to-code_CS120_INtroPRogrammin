#include <iostream>
using namespace std;

int main()
{
    // Create two integer variables, number and sum and assign 0 to sum
	int number;
	int sum = 0;

	
	// Create while loop that remains true
	 while ( true )
	{
		 //Prompt the user to enter a number
		 cout << "Enter a number: ";
		 cin >> number;
		 
		 // Create a condition for the the while loop to become false, in this we're using -1 as the sentinel value_comp
		if ( number == -1)
		{
			break;
		}
		
		// This program is only met to add odd numbers so create a condtional where only the odd numbers will be added by using the modulo operator
		if ( number % 2 > 0 )
			sum += number;
	}
	
	// Out put the results IE; if the user inputs 2,3, 4 and -1 the output should be "The sum of the odd numbers is 3.
	cout << endl <<"The sum of the odd numbers is " << sum <<".";
}
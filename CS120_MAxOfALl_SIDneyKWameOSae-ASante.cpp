#include <iostream>
using namespace std;

int main()
{
    // Create two integer variables, number in which the user will input values and current_max which will hold the current largest number
	int number;
	int current_max;
	
	// Descripe the program
	
	cout << "This program finds the maximum number.";
	cout << endl;
	cout << endl;
	
	//Promp the user to enter a number
	cout << "Number: ";
	cin >> number;
	
	current_max = number;

	// Create while loop that remains true until the user enters 0 which is the sentinel value
	 while ( number != 0 )
	{
		//Create the conditional that changes the value of the current max to the new number if it is greater
		if ( number > current_max )
			current_max = number;
		
		cout << "Number: ";
		cin >> number;
	}
	
	// Out put the results IE; if the user inputs 1 ,2,3, 4 and 0 the output should be " The largest number is 4."
			cout <<"The largest number is " << current_max <<".";
}
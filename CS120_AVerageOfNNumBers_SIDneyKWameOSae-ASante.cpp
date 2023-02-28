#include <iostream>
using namespace std;

int main()
{
    // Create two float variables, number and sum and assign 0 to sum, and create one integer variable that holds the number of numbers
	float number;
	float sum = 0;
	int count;
	
	// Describe the programm
	cout <<"This program averages numbers." <<endl;
	cout <<endl;
	
	cout <<"How many numbers? ";
	cin >> count;

	
	// Create for loop that remains true until the number of numbers have been entered
	 for ( int i=1; i <= count; i++ )
	{
		 //Prompt the user to enter a number
		 cout << "Number: ";
		 cin >> number;
		 
		 //Add the entered number to the sum
		 sum += number;
		 		
	}
	
	// Out put the results IE; if the user inputs 2 as the number of numbers; 4 and 2 as the number the output should be "The average is 3.
	cout <<"The average is " << sum / count <<".";
}
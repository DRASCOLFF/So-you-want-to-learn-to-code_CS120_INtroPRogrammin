#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Create  float variables
	float number;
	float sum = 0;
	float current_max;
	float current_lst;
	float average;
	
	// Input the first number
	cin >> number;
	
	// Assign the value of the inital number to current_max, current_lst and sum
	current_max = number;
	current_lst = number;
	sum = number;
	
	
	// Create for loop that remains true until the number of numbers have been entered
	 for ( int i=1; i < 7; i++ )
	{
		 //Prompt the user to enter a number
		 cin >> number;
		 
		 //Add the entered number to the sum
		 sum += number;
		 
		 //Compare the numbers to the number that's currently the biggiest
		 
		 if ( number > current_max )
			current_max = number;
		
		//Compare the numbers to the number that's currently the smallest
		 if ( number < current_lst )
			current_lst = number;
			 		
	}

	// Calculate the averegage
	average = (sum - (current_max +current_lst) ) / 5 ;
	
	// Out put the results with 2 decimal values
	cout <<"Average score: " << fixed << setprecision(2) << average ;
}
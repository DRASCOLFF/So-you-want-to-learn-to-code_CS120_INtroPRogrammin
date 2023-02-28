#include <iostream>
using namespace std;

int main()
{
	// Create 4 integer variables, count to store the number of terms in the fibonacci sequence, prime to store the initial value which is 0, successor to store the next value which will be 1, fibosum to store the actual fibonacci number corresponding to the count value
	int count;
	float prime = 0;
	int successor =1;
	int fibosum=0;
	
	// Describe the programm
	cout <<"This program averages numbers." <<endl;
	cout <<endl;
	
	cout <<"How many numbers? ";
	cin >> count;

	
	// Create for loop that remains true until the number of numbers have been entered
	 for ( int i = 0; i < count; i++ )
	{
		// for the fibonacci sequence the first 2 numbers are 0 and 1 and that will correspond the the iteration number
		if ( i < 2 )
		{
			fibosum = i;
		}
		
		// For the rest of the series, the fibonacci is found by adding the 2 previous terms together
		else
		{
		
		// This assigns the sum of the previous 2 terms to the fibonacci number
		fibosum = successor + prime;
		
		// This then assigns the previous second term to the first term as the value changes continuously
		prime = successor;
		
		//This then assigns the second term to calculated fibonacci number as it is now part of the series
		successor = fibosum;
		}
		
		//Outputs the results
		cout << "F("<<i<<") = "<< fibosum <<endl;
		 
	}
	
	
}
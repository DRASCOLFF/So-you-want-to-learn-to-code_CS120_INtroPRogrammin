#include <iostream>
using namespace std;

int main()
{
    // Create three integer variables: month, Years, days
	int Month;
    int Year;
	int days;

	
	// This program identifies the number of days in a month in a particular year

    // Prompt the user to enter the number corresponding to the month I
    cout << "Month: ";
	cin >> Month;
	
	//Prompt the user to enter the year
	cout << "Year: ";
	cin >> Year;
	cout <<endl;
	
	
	
	//The different months have different numbers of days, mainly 31, 30, 28 and occasionally february, make conditionals for these months
	
	
	//Create a conditional for the months with 31 days. These are January (1), March (3) , May (5), July (7), August (8), October(10) and December (12)
	if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12 )
	{
		//Assign the number of days 31 to the variable days
		days = 31;
		
		// Output the result IE; if the user inputs 3 for the month, and 2012 as the year the program should output "3/2012 has 31 days"
		cout <<Month<<"/"<<Year<<" has "<<days<< " days." ;
	}
	
	//Create a conditional for the months with 30 days. These are April (4), June (6), September (9) and  November (11)
	if (Month == 4 || Month == 6 || Month == 9 || Month == 11 )
	{
		//Assign the number of days 30 to the variable days
		days = 30;
		
		// Output the result IE; if the user inputs 4 for the month, and 2012 as the year the program should output "4/2012 has 31 days"

		cout <<Month<<"/"<<Year<<" has "<<days<< " days." ;
	}
	
	//Create a conditional for February during a leap year. Leap years happen every 4 years, so that means the year number would be completely divisible by 4 without any remainders. The modulo operator. Oh yeah, there's a bit weird rule, every 100 years the 4th year isn't counted as a leap year, so years ending in 00 or being perfectly divisible by 100 don't count, so set up another modulo that divides by 100 to check if there is a remainder.
	if (Month == 2 && Year % 4 == 0 && (Year % 400 == 0 || Year % 100 > 0) )
	{
		//During a leap year February the 2 month has 29 days so assign 29 to the variable days
		days = 29;
		
		// Output the result IE; if the user inputs 2 for the month, and 2012 as the year the program should output "2/2012 has 29 days"
		cout <<Month<<"/"<<Year<< " has " <<days << " days." ;
	}
	
	//Create a conditional for February during a regular year. Similar to the last conditional the modulo operator will be used as during a regular year, the number isn't perfectly divisible, so there will be a remainder greater than 0. The modulo operator. Oh yeah, there's a bit weird rule, every 100 years the 4th year isn't counted as a leap year, so years ending in 00 or being perfectly divisible by 100 don't count, so set up another modulo that divides by 100 to check if there isnt a remainder.
	if (Month == 2 && ( Year % 4 > 0 || (Year % 400 > 0 && Year % 100 == 0 ) ) )
	{
		// During anyother year that doesn't fall under the very specific conditions that makes a leap year February month 2 has 28 days so assign 29 to the variable days
		days = 28;
		
	// Output the result IE; if the user inputs 2 for the month, and 1900 as the year the program should output "2/1900 has 31 days"

		cout <<Month<<"/"<<Year<<" has " <<days << " days."; 
	}
	


}
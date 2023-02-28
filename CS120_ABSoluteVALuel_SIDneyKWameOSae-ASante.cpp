#include <iostream>
using namespace std;

int main()
{
    // Create two integer variables: integer, absolute_value
	int integer;
	int absolute_value;

    // Prompt the user to enter an integer, read the input value into variable integer;
    cout << "Enter integer: " ;
	cin >> integer;
	cout <<endl;

	// The absolute value of a positive integer is the same thing, so assign the value to the variable, absolute_value
	if ( integer >= 0 )
	{
		absolute_value = integer;
		// Output the result, e.g., if number = 3, your program should print "|3| = 3"
		cout << "|" << integer << "|" <<" = "<< absolute_value ;
	}

	// An integer could be negative, and in that case, all you would need to do is multiply it by negative one, and assign the value to the variable, absolute_value
	if ( integer < 0 )
	{
		absolute_value = integer * (-1);
		// Output the result, e.g., if number = -3, your program should print "|-3| = 3"
		cout << "|" << integer << "|" <<" = "<< absolute_value ;
	}
}
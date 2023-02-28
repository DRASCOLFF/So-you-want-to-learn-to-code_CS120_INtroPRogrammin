#include <iostream>
using namespace std;

int main()
{
    // Create three float variables: number, after_decimal
float number;
float after_decimal;

    // Prompt the user to enter a number, read the input value into variable number
    cout << "Enter number: ";
	cin >> number;


    // Finds the difference between the float value and the integer form in order to find the numbers after the decimal points, then stores it in variable after_decimal
	after_decimal = number - int(number);

    // Output the result, e.g., if number = 1.5, your program should print "After the decimal: 0.02"
	cout << "\nAfter the decimal: " << after_decimal << endl;

}
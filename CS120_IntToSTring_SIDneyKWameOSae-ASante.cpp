#include <iostream>
using namespace std;

//
string intToString (int n)
{
	// Create variables
	int number =  n;
	int count = 0; //This holds the number of digits
	string str_val;
	string new_string;
	char digit_holder;
	
	//48 is used because the character 0-9 start off as 48 decimal. The decimal 0-9 starts off with 0, so quick math

	//When the number is 0 the string value will be assigned the character for 0
	if (number == 0)
		str_val = char(48);
	
	// When the number is negative it will be converted to a positive to simplify the rest of the process
	if (number < 0)
		number = -1*number;

	while (number > 0)
	{
		//This stores the last digit of the number as the character value of integer
		digit_holder = number % 10;
		
		// This is for the first digit
		if (count < 1)
		{
			//This adds the first digit to the string
			str_val = (digit_holder+48);
			
		}
		
		// This adds the rest of the digits to the string
		if (count > 0)
		{
			str_val += (digit_holder+48);
		}
	
		//The number drops with each place value
		number = number / 10;
		
		//This increases as the number of digits increase
		count++;
	}
	
	//When adding strings together, it's like putting the characters next to each other, in the order they were added, so now the string is reversed
	
	//When the integer is negative, the first character must be a minus, so this adds the minus sign, so the number of digits increase
	if (n<0)
	{
		str_val += char(45);
		count++;
	}
	
	//This creates a new string which is exactly the same as the old one
	new_string = str_val;
	
	//This helps with indexing, so the count matches the index, computers start from 0
	count --;

	int i = 0;
	while (i <= count )
	{
		//The new string will store the old strings value in descending order
		
		//Origianlly there was a reason for this conditional
		if (n < 0)
		{
			new_string[i] = str_val[(count-i)];
			i++;
		}
		else
		{
			
			new_string[i] = str_val[(count-i)];
			i++;
		}
	}
	
	return new_string;
	
}
//
int main()
{
	int integer;
	
	//Ask the user to input results
	cout <<"Enter number: ";
	cin >> integer;
	
	//Out put the results
	cout <<endl<<"The integer value "<<integer<<" becomes the string value "<<"\""<< intToString(integer) <<"\"";
}
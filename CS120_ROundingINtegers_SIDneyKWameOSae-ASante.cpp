#include <iostream>
using namespace std;


// Create a function that rounds a given number to a unit which will be 10s
int round (int number, int unit)
{
	// For this program the function always runs down and the unit will be a power of 10
	number = number - (number%unit);
	return number;
}

int main()
{
	//Declaring the input variable of the user
	int integer;
	
	cout <<"Enter an integer: ";
	cin >> integer;
	cout<<endl;
	
	cout <<"Round to ten: " << round(integer, 10)<<endl;
	cout <<"Round to hundred: "<<round(integer, 100)<<endl;
	cout<<"Round to thousand: "<<round(integer, 1000)<<endl;
   
}
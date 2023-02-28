#include <iostream>
using namespace std;

int main()
{
    // Create three float variables: Length, Width, Depth, Water_entry_rate, Fill_time
float Length;
float Width;
float Depth;
float Water_entry_rate;
float Fill_time;

    cout << "Enter pool dimensions" << endl;

    // Prompt the user to enter the length of the pool, read the input value into variable Length
    cout << "Length: ";
	cin >> Length;

    // Prompt the user to enter the width of the pool, read the input value into variable Width
    cout << "Width: ";
	cin >> Width;
	
	// Prompt the user to enter the depth of the pool, read the input value into variable Depth
    cout << "Depth: ";
	cin >> Depth;
	
	// Prompt the user to enter the water entry rate of the pool, read the input value into variable Water_entry_rate
    cout << "\nWater entry rate: ";
	cin >> Water_entry_rate;

    // Multiply the length by the width  and then the depth in order to obtain the volume in cubic feet, and then multiply that by 7.48 in order to convert that to gallons. Finally divide that by the water entry rate, store the answer into variable Fill_time.
	Fill_time = ( ( Length * Width * Depth ) * 7.48 / Water_entry_rate );

    // Output the result, e.g., if Length = 10, Width = 8, Depth = 7, Water_entry_rate = q4, your program should print "The pool will fill completely in 299.2 minutes."
	cout << "\nThe pool will fill completely in " << Fill_time << " minutes" << endl;

}
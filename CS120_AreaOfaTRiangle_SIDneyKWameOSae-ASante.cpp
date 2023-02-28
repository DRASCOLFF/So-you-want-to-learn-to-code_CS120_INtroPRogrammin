#include <iostream>
using namespace std;

int main()
{
    // Create three float variables: base, height, area
float base;
float height;
float area;
    cout << "This program computes the area of a triangle." <<endl;

    // Prompt the user to enter the base of the triangle, read the input value into variable base
    cout << "\nEnter the base of the triangle: ";
	cin >> base;

    // Prompt the user to enter the height of the triangle, read the input value into variable height
    cout << "Enter the height of the triangle: ";
	cin >> height;

    // Multiply the base by the height by 0.5, store the answer into variable area.
	area = 0.5*( base * height ); 

    // Output the result, e.g., if base = 3 and height = 4, your program should print "The area is 6."
	cout << "\nThe area is " << area << endl;

}
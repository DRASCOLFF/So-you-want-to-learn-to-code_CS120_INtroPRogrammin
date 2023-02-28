#include <iostream>
using namespace std;

int main()
{
	// Create a variable that holds the numbers of rows
	int row;
	
	// Ask the user to input the number of rows
	cout << "How many rows?";
	cin >> row;
	
	cout<< endl;
	
	// Create a for loop which will keep on running until the number of rows have been outputed
	for (int i = 1; i <= row; i++)
	{
		// This loop is what causes the varied number of items within the row giving the patter
		for (int j=1; j <= i; j++)
		{
			cout<<"@";
		}
		cout<<endl;
	}
	
	
	
}
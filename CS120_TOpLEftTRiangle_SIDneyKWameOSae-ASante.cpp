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
	for (int i = row; i >= 1; i--)
	{
		// This loop is what causes the varied number of items within the row giving the patter
		for (int j=i; j > 0; j--)
		{
			cout<<"@";
		}
		cout<<endl;
	}
	
	
	
}
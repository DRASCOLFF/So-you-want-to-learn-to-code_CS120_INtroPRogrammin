#include <iostream>
using namespace std;

int main()
{
	int board[8];
	int check =1;
	
	//Get user input for board state
	cout<< "Enter the columns containing queens in order by row:";
	for (int i = 0; i < 8; i++)
	
		cin >> board [i];

	int RowCount[8];
	for (int r = 0; r < 8; r++) 
		RowCount[r] = 0;
	
	for (int c = 0; c < 8; c++) 
		RowCount[board[c]]++;
	
	// This will check if there is more than one queen in a row
	for (int r =0; r < 8; r++)
		if (RowCount[r] != 1)
		{
			cout << "No" << endl;
			check++;
			break;
		}
	// This checks if there was change to the check value, and if there isn't there was one queen in each row and column
	if ( check == 1)
		{ 
			cout << "Yes" ;
			
		}	
	
 
}
#include <iostream>
using namespace std;

int main()
{
	int board[8];
	
	//Get user input for board state
	cout<< "Enter the columns containing queens in order by row:";
	for (int i = 0; i < 8; i++)
		cin >> board [i];
	
	//Output the board
	for (int r = 0; r < 8; r++)
	{
		for (int c = 0; c < 8; c++)
		{
			//Create a conditional that outputs Q when the row number matches the column
			if (board[r] == c )
				cout << "Q";
			else 
				cout << ".";
		}
		cout << endl; 
	}
 
}
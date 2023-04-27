#include <iostream>
#include <iomanip>
using namespace std;

//This is the function that will print out the array
void PrintArray(int a[], int size)
{
	for( int i = 0; i < size-1; i++)
		cout << setw(2) << a[i] << ",";
	cout << setw(2) << a[size-1] << endl;
}

// This function arranges the array from smollest to swollest
void SelectionSort(int arr[], int size)
{
	for( int i = 0; i < size-1; i++)
	{
		//This sets the index of the smoll one to the initial i value
		int smol_index = i;
		for(int j = i+1; j< size; j++)
		{
			//when theres a value that makes the smoll one look swole it becomes the smoll one
			if (arr[j] < arr[smol_index])
				smol_index = j;
		}
		
		//Changes the position of the smoll one
		swap(arr[i], arr[smol_index]);
		
		//prints out each iteration of the array
		PrintArray(arr,size);
	}
}

int main()
{
	//Describe the program
	cout <<"This program prints parent-child pairs."<<endl;
	cout <<"Enter parent and children below, use \'quit\' to stop ."<<endl;
	
	string Parent[1000];//This will hold the parents
	string Children[2000]; //This will hold the children which could be any
	int Parent_count = 0; //This will hold the number of parents and index
	int Parent_child_count[2000]; // This will hold the number of children of each parent
	int Children_count=0; // This will hold the number of children
	int Parent_child_slot[2000]; // This will hold the child number corresponding to the parents in the children array
	string Ord_Children[2000]; // This will hold the children in alphabetical order
	string Ord_Parent[2000]; // This will hold the parents of the children in order
	
	
	// Create a loop that will run continously
	while (true)
	{
	
		//Ask the user to input the parent
		cout <<"Parent: ";
		cin >> Parent[Parent_count];
		
		//Condition for the loop to break
		if (Parent[Parent_count] == "quit")
			break;
		
		//Ask the user to input the number of children that the parent has and store it in the array that stores the number of children corresponding to a parent index
		cout <<"How many children does "<<Parent[Parent_count]<<" have? ";
		cin >> Parent_child_count[Parent_count];
		
		cout <<"Children of " <<Parent[Parent_count] <<": ";
		
		//This loop will run until the children of the parent has been entered
		for (int i = 0; i< Parent_child_count[Parent_count]; i++)
		{
			cin >> Children[Children_count]; //Store the value in the children array
			Ord_Children[Children_count] = Children[Children_count]; // Store the value in the child array that will eventually be sorted
			Children_count++; //increment the child count with each addition
		}
		
		
		for(int i = 0; i<= Children_count; i++)
		{
			
		}
		
		//This stores the slot in which the children of the parent is in the children array by using the sum of children at the time of entering the final child
		Parent_child_slot[Parent_count] = Children_count;
		
		//Increment the parent count after each run
		Parent_count++;
	}
	
	//This loop will add the parents to the children array
	for(int i = 0; i<Parent_count; i++)
	{
		// Declare a variable which will serve as the check
		int check = 0;
		
		for(int j =0; j<= Children_count; j++)
		{

			//If the parent is already in the children array the check value will incread
			if(Parent[i] == Children[j])
				check ++;
				
		}
		
		// If after going through the entire children array and the parent is not in it, the check value will be the same, and then the parent will be added to both the children array and sorted children array
		if (check == 0)
		{
			Children[Children_count] = Parent[i];
			Ord_Children[Children_count] = Parent[i];
			Children_count++; // If the parent is added to the children array, the number of children will increase
		}
		
	}
	
	//This arranges the children list in alphabetical order in a different array
	for(int i = 0; i < Children_count; i++)
	{
		int smol_index = i;
		
		for(int j = i+1; j< Children_count; j++)
		{
			if(Ord_Children[j] < Ord_Children[smol_index])
				smol_index = j;
		}
		
		swap(Ord_Children[i], Ord_Children[smol_index]);
		
	}
	
	//This is how the New parent array will be made
	
	//First the program will go through the entire ordered children array
	for(int i = 0; i <= Children_count; i++)
	{
		//This will also go through the entire children array
		for(int j = 0;j <= Children_count; j++)
		{
			//This will then compare the member of the ordered children array to the child array and if they are the same like the same child
			//it will then go through the parent array that holds the slot of their children and if the current number of children matches a slot range of a parent it will asign the parent name to the ordered parent under the same index of the ordered children
			if(Ord_Children[i] == Children[j])
			{
				for(int k=0; k < Parent_count; k++)
				{
					if (k<1) // for the first parent the child number just needs to be  equal to it
					{
						if(j < Parent_child_slot[k])
						{
							Ord_Parent[i] = Parent[k];
						}
					}
					if( j>= (Parent_child_slot[k-1]) and j< (Parent_child_slot[k])) //range of slot greater or equal to the previous slot and less than the current slot
					{
						Ord_Parent[i] = Parent[k];
					}
						
				}
			}
		
		}
		
		
	}
	cout <<endl;
	
	// Output the results in a table like format
	cout<<setw(9) <<left<<"Child"<<"Parent"<<endl;
	
	cout<<setw(9) <<left<<"-----"<<"------"<<endl;
	
	
	for( int i = 0; i <= Children_count; i++)
	{
		cout << setw(9) <<left <<Ord_Children[i] << Ord_Parent[i]<<endl;

	}


   
}

// cout<< setw(9) << left <<children[d]d <<
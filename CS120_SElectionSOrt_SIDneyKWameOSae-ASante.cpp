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
	//Describes the program
	cout<<"This program sorts a set of numbers."<<endl;
	cout<<endl;
	
	//Asks the user to input number of values
	cout<<"How many values? ";
	
	// Variable which will hold the size of the array
	int size;
	cin>>size;
	
	//Count will eventually be used for the array
	int count = 0;
	
	//This is for the individual members of the array
	int number;
	
	//Creates an array and sets it to the size that the user inputted Scratch that, athene didn't like that, so put it to 100
	int arr[100];
	
	
	//User inputs values into the array
	while ( count < size)
	{
		cin>>number;
		arr[count] = number;
		count++;
	}
	cout <<endl;

	
	//Outputs the results
	SelectionSort(arr, size);
	


   
}
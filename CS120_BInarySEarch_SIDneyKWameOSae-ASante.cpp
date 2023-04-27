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

// This function searches for a value
int binarySearch(int A[], int size, int value)
{
	
	int upper = size-1; //upper bound index of the array is equal to one less of the array
	int lower = 0; //lower bound of the array is equal to 0
	int mid;
	
	//Create a loop that will run continuously until the lower bound is equal to or greater than the upper
	while(lower <= upper)
	{
		mid = (lower + upper) /2; // recalculates the middle of the array
		
		// This program searches for the value by continutously checking the middle of the array
		if (A[mid] == value)
			return mid;
		
		//Value must be in upper half
		if(A[mid] < value)
			lower = mid +1;
		
		//Value must be in lower half
		if (A[mid] > value)
			upper = mid-1;
		
	}
	
	
	return -1;

}

int main()
{
	
	
	//Asks the user to input number of values
	cout<<"How many values? ";
	
	// Variable which will hold the size of the array
	int size;
	cin>>size;
	
	//Count will eventually be used for the array
	int count = 0;
	
	//This is for the individual members of the array
	int number;
	
	//Creates an array and sets it to the size that the user inputted Scratch that, athene didn't like that, so put it to 500
	int arr[500];
	
	
	//User inputs values into the array
	while ( count < size)
	{
		cin>>number;
		arr[count] = number;
		count++;
	}
	cout <<"Search for: ";
	int value;
	cin >>value;

	
	//Outputs the results
	if (binarySearch(arr,size, value) > -1)
		cout<<value<<" appears at index "<<binarySearch(arr, size, value);
	
	if (binarySearch(arr,size, value) == -1)
		cout<<value <<" does not appear in the list";

	


   
}
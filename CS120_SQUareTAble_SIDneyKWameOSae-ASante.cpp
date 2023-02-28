#include <iostream>
#include<string>  
using namespace std;

int main()
{
    int input, number = 1, count;
    cout << "The program prints a table of squares." << endl << 
    "Enter the number of squares to print: " ;
    cin >> input;
    cout << endl;

    for (int i = 0; i < input; i++)
    {
        cout << number << " squared is " << number*number << endl;
        number ++;
    }
}
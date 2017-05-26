/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 16
junhak.lee@usc.edu
*/
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>

using std::cout;
using std::endl;

int main()
{
	const int SIZE = 10; //create array size
	int myArray[SIZE]; //create array
	for (int i = 0; i < 10; i++) //create array random values
	{
		myArray[i] = (rand() % 10) + 1;
	}
	int* ptr = myArray; //create pointer to point to myArray

	cout << "Initial array: " << endl; //initial array
	for (int i = 0; i < SIZE; i++) //print initial array
	{
		cout << *(ptr + i) << " | ";
	}
	cout << endl;

	cout << "Modified array:" << endl;//modified array
	for (int j = 0; j < SIZE; j++) //create random values and print modified array
	{
		*(ptr + j) = (rand() % 10) + 11;
		cout << *(ptr + j) << " | ";
	}
	cout << endl;

	return 0;
}
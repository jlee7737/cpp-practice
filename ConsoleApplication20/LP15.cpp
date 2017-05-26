/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 15
junhak.lee@usc.edu
*/
#include <iostream>
#include <ctime>
#include <string>
#include <cstring>
#include <cmath>
#include <fstream>

using std::cout;
using std::endl;

//function: swap
//purpose: swaps two numbers
//parameters: two int pointers
//output: nothing
void swap(int* ptr1, int* ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main()
{
	//constant int
	const int SIZE = 10;

	//declare integer array
	int myArray[SIZE];

	//random number generator: seed
	std::srand(std::time(0));

	//loop through creating random numbs
	for (int i = 0; i < SIZE; i++)
	{
		myArray[i] = std::rand() % 100;
		cout << myArray[i] << " | ";
	}

	//start sorting
	cout << endl << "Sorting array..." << endl;

	//declare 2 int pointers set them equal to array[0] and array[1]
	int* pointer1 = &myArray[0];
	int* pointer2 = &myArray[1];

	//loop passes
	for (int j = 0; j <= SIZE; j++)
	{
		//loop through array
		for (int k = 0; k < SIZE; k++)
		{		
			//pointer1 < pointer2 =>> swap
			if (*pointer1 < *pointer2)
			{
				swap(pointer1, pointer2);
			}
			//move to next elements
			pointer1 = &myArray[k + 1];
			pointer2 = &myArray[k + 2];
		}
	
		//reset pointers to [0], [1]
		pointer1 = &myArray[0];
		pointer2 = &myArray[1];
	}

	cout << "Sorted Array: " << endl;
	//print array
	for (int i = 0; i < SIZE; i++)
	{
		cout << myArray[i] << " | ";
	}
	cout << endl;
	return 0;
}
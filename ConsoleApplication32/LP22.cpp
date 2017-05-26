/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 22
junhak.lee@usc.edu
*/
#include "binary.h"
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	int size; //variable to hold how many binary to create

	cout << "How many binary numbers do you want to create? "; //prompt size
	cin >> size;

	int* decNums = new int[size]; //create dynamic array
	Binary* myBinary = new Binary[size];

	for (int i = 0; i < size; i++){ //loop through to assign decmial nums to decNums array
		cout << "Enter binary number " << i + 1 << ": "; //prompt decimal number to convert to binary
		cin >> decNums[i];

		if (decNums[i] < 0){ //if invalid input
			cout << "Invalid input!" << endl;
			cout << "Initialized to 0." << endl;
			(myBinary + i)->set(0); //sets initialization
		}
		else{
			(myBinary + i)->set(decNums[i]); //sets binary 
		}
	}

	for (int j = 0; j < size; j++){ //prints decimal and binary numbers
		cout << decNums[j] << " = ";
		(myBinary + j)->print();
		cout << endl;
	}

	return 0;
}
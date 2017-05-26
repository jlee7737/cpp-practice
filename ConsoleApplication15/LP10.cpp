/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 10
junhak.lee@usc.edu
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

void LargestNum() //largest num function
{
	double userIn = 0.0; //create necessary variables
	double largest = 0.0;

	while (userIn >= 0) //run while user decides to quit
	{
		std::cout << "Enter a number (input negative number to quit): "; //ask for x
		std::cin >> userIn;

		if (userIn > largest)//compare x to y
		{
			largest = userIn; //replace largest num
		}
	}
	std::cout << "The largest number is " << largest << std::endl; //output result
}

int main()
{
	LargestNum(); //call function

	return 0;
}
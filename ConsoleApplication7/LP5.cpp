//
//Junhak Lee
//ITP 165, Fall 2014
//Lab Practical 5
//junhak.lee@usc.edu
//

#include <iostream>
#include <string>

int main()
{
	//declare int variable
	int userIn = 0;

	//ask user for number 0-255
	std::cout << "Input number between 0-255: ";
	std::cin >> userIn;

	if ((userIn < 0) || (userIn > 255)) //check if valid number is input
	{
		std::cout << "Error. Enter number 0-255." << std::endl;
	}
	else
	{
		bool isOdd = 1; //create bool to hold result

		isOdd = userIn & 1; //bitwise operator using isOdd to determine if it's even or odd

		if (isOdd)	//display even or odd
		{
			std::cout << userIn << " is odd." << std::endl;
		}
		else
		{
			std::cout << userIn << " is even." << std::endl;
		}
	}
	
	return 0;
}
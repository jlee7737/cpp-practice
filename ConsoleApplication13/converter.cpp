/*
John Junhak Lee
ITP 165, Fall 2014
Homework 4
junhak.lee@usc.edu
*/
#include <iostream>
#include <string>
#include <cmath>
int main()
{
	//title
	std::cout << "Decimal to Binary Converter" << std::endl;
	std::cout << "==================================================" << std::endl;

	int number; //create necessary variables & array
	int origNum;
	const int byteSize = 8;
	bool eightBits[byteSize];
	std::string select;

	while (true)
	{
		std::cout << "Enter a decimal(base 10) number from 0 to 255: ";//request and input variable number
		std::cin >> number;
		origNum = number;

		if ((number < 0) || (number > 255)) //invalid condition if number isn't between 0 and 255
		{
			std::cout << "Invalid number." << std::endl;
		}
		else //valid condition runs
		{
			//convert decimal number to binary number
			for (int index = 7; index >= 0; index--) //looping through array to fill in all 8 binary bits
			{
				if (number >= pow(2, index)) //if it fits in index'th position
				{
					eightBits[index] = 1; //set index'th bit position to 1
					number = number - pow(2, index); //correct for next iteration
				}
				else
				{
					eightBits[index] = 0; //set index'th bit position to 0
				}
				/*std::cout << eightBits[index];*/ //only when I don't need to print statement "origNum in decimal is blah blah blah" for hw points =(
			}
			std::cout << origNum << " in decimal is " << eightBits[7] << eightBits[6] << eightBits[5] << eightBits[4] << eightBits[3] << eightBits[2] << eightBits[1] << eightBits[0] << " in binary." << std::endl; //output result

			//try again iteration
			std::cout << "Would you like to try again? (y/n): "; //ask again?
			std::cin >> select;
			while (!((select == "y") || (select == "yes") || (select == "n") || (select == "no"))) //if not entered valid option: y or n or yes or no
			{
				std::cout << "Invalid option." << std::endl;
				std::cout << "Would you like to try again? (y/n): "; //ask until input valid option y or yes or n or no
				std::cin >> select;
			}
			if ((select == "n") || (select == "no")) //n or no selection
			{
				break; //breaks out of loop
			}
		}
	}
	return 0;
}


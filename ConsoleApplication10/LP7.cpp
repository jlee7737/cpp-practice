/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 7
junhak.lee@usc.edu
*/
#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::cout << "Factorial Calculator" << std::endl; //title

	int facNum = 1; //necessary variables
	long long result = 1;

	std::cout << "Enter a number: "; //request and input number for factorial
	std::cin >> facNum;

	if ((facNum == 0) || (facNum == 1)) //test if it's 0 or 1, if it is, run this
	{
		std::cout << facNum << "! = " << result << std::endl; //print result
	}
	else //if number other than 0 or 1, run this
	{
		for (int index = facNum; index > 0; index--) //calculate factorial through loop
		{
			result *= index;
		}
		std::cout << facNum << "! = " << result << std::endl; // print result
	}

	return 0;
}

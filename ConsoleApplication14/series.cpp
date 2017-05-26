/*
Junhak Lee
ITP 165, Fall 2014
Homework 5
junhak.lee@usc.edu
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

long long factorial(int a) //create factorial function
{
	long long factorialResult = 1; //variable
	if (a == 0) //if 0!
	{
		factorialResult = 1;
	}
	else
	{
		for (int i = 1; i <= a; i++) //loop to calculate factorial
		{
			factorialResult = factorialResult*(i);
		}
	}
	return factorialResult;
}

int main()
{	
//===============================================================================
//part 1 pi calc ================================================================
//===============================================================================
	while (true)
	{
		int iterations; //create necessary variables
		double piQuarter = 0;
		std::string yesOrNo;

		std::cout << "===Leibniz Approximation of PI===" << std::endl; //title

		std::cout << "Enter number of iterations: "; //request and input iterations value
		std::cin >> iterations;

		for (int index = 0; index < iterations; index++) //for loop to calculate sum
		{
			piQuarter = piQuarter + (std::pow(-1, index)) / (2 * index + 1); //computing and updating sum
		}
		std::cout << "The value of pi is: " << piQuarter * 4 << std::endl; //output result

		//try again yes or no code====================
		std::cout << "Try again? (y/n): ";
		std::cin >> yesOrNo;
		while (!((yesOrNo == "y") || (yesOrNo == "yes") || (yesOrNo == "n") || (yesOrNo == "no")))
		{
			std::cout << "Invalid choice." << std::endl;
			std::cout << "Try again? (y/n): ";
			std::cin >> yesOrNo;
		}
		if ((yesOrNo == "n") || (yesOrNo == "no"))
		{
			break; //break out of pi calc
		}
	}
//===============================================================================
//part 2 exp calc================================================================
//===============================================================================
	while (true)
	{
		int iterations2; //create variables
		double x;
		long double exp = 0;
		std::string yesOrNo2;

		std::cout << "===Exponential Value Calculator===" << std::endl; //title

		std::cout << "Enter number of iterations: "; //request and input variables 
		std::cin >> iterations2;
		std::cout << "Enter x: ";
		std::cin >> x;

		for (int index = 0; index < iterations2; index++) //loop to compute series
		{
			exp = exp + (std::pow(x, index)) / factorial(index); //exp series equation
		}
		std::cout << "e^(" << x << ") = " << exp << std::endl; //print result
		
		//try again yes or no code====================
		std::cout << "Try again? (y/n): ";
		std::cin >> yesOrNo2;
		while (!((yesOrNo2 == "y") || (yesOrNo2 == "yes") || (yesOrNo2 == "n") || (yesOrNo2 == "no")))
		{
			std::cout << "Invalid choice." << std::endl;
			std::cout << "Try again? (y/n): ";
			std::cin >> yesOrNo2;
		}
		if ((yesOrNo2 == "n") || (yesOrNo2 == "no"))
		{
			break; //break out of exp calc
		}
	}
	return 0;
}
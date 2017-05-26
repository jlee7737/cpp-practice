/*
Junhak Lee
ITP 165, Fall 2014
Homework 3
junhak.lee@usc.edu
*/

#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::cout << "Mortgage Payment Calculator - Bank of ITP 165" << std::endl; //title

	std::cout << "=====================================================" << std::endl;
	//part 1: down payment
	int purchasePrice; //create necessary variables
	int percentDown;
	double downPayment;
	double loanAmount;

	std::cout << "Enter purchase price: "; //requests & assigns inputs
	std::cin >> purchasePrice;
	std::cout << "Enter percent down(for 25% down, enter 25): ";
	std::cin >> percentDown;

	downPayment = purchasePrice * (double(percentDown) / 100); //perform calculations
	loanAmount = purchasePrice - downPayment;

	std::cout << "At " << percentDown << "% down..." << std::endl; //print out results
	std::cout << "Your down payment is $" << downPayment << std::endl;
	std::cout << "Your loan amount is $" << loanAmount << std::endl;


	std::cout << "=====================================================" << std::endl;
	//part 2: number of payments
	int select; //create necessary variables
	int numPayments;

	std::cout << "Pick a type of mortgage..." << std::endl; //show options and assigns input
	std::cout << "1. 7 years" << std::endl;
	std::cout << "2. 15 years" << std::endl;
	std::cout << "3. 30 years" << std::endl;
	std::cout << "Select from options 1, 2, or 3: ";
	std::cin >> select;

	switch (select) //uses input to lead to option
	{
		case 1: //sets numPayments variable and prints how option and number of monthly payments needed
		{
			  numPayments = 84;
			  std::cout << "You selected a 7 year mortgage, which has a total of " << numPayments << " monthly payments." << std::endl;
			  break;
		}
		case 2: //sets numPayments variable and prints how option and number of monthly payments needed
		{
			  numPayments = 180;
			  std::cout << "You selected a 15 year mortgage, which has a total of " << numPayments << " monthly payments." << std::endl;
			  break;
		}
		case 3: //sets numPayments variable and prints how option and number of monthly payments needed
		{
			  numPayments = 360;
			  std::cout << "You selected a 30 year mortgage, which has a total of " << numPayments << " monthly payments." << std::endl;
			  break;
		}
		default:
		{
				   numPayments = 0;
				   std::cout << "Error! Enter valid choice" << std::endl;
				   break;
		}
	}


	std::cout << "=====================================================" << std::endl;
	//part 3: interest rates
	double interestPercent; //create necessary variables

	if (percentDown<25) //check if percentDown is lower than 25, if it is, proceed this way
	{
		if (select == 1) //at this choice of years, this is the result printed
		{
			interestPercent = 2.25;
			std::cout << "With " << percentDown << "% down and a 7 year mortgage, we can offer you an interest rate of " << interestPercent << "%";
		}
		else if (select == 2) //at this choice of years, this is the result printed
		{
			interestPercent = 3.00;
			std::cout << "With " << percentDown << "% down and a 15 year mortgage, we can offer you an interest rate of " << interestPercent << "%";
		}
		else //at this choice of years, this is the result printed
		{
			interestPercent = 3.75;
			std::cout << "With " << percentDown << "% down and a 30 year mortgage, we can offer you an interest rate of " << interestPercent << "%";
		}
	}
	else //if percentDown is not less than 25, proceed this way
	{
		if (select == 1) //at this choice of years, this is the result printed
		{
			interestPercent = 2.00;
			std::cout << "With " << percentDown << "% down and a 7 year mortgage, we can offer you an interest rate of " << interestPercent << "%";
		}
		else if (select == 2) //at this choice of years, this is the result printed
		{
			interestPercent = 2.75;
			std::cout << "With " << percentDown << "% down and a 15 year mortgage, we can offer you an interest rate of" << interestPercent << "%";
		}
		else //at this choice of years, this is the result printed
		{
			interestPercent = 3.50;
			std::cout << "With " << percentDown << "% down and a 30 year mortgage, we can offer you an interest rate of " << interestPercent << "%";
		}
	}
	std::cout << std::endl;


	std::cout << "=====================================================" << std::endl;
	//part 4: monthly payment calculation
	double monthlyInterest; //create necessary variables
	double monthlyPayment;

	monthlyInterest = (interestPercent / 1200); //calculate monthlyInterest

	monthlyPayment = loanAmount * (monthlyInterest * std::pow(1 + monthlyInterest, numPayments)) / (std::pow(1 + monthlyInterest, numPayments) - 1);//calculate monthyPayment

	std::cout << "Your estimated mortgage payment would be $" << monthlyPayment << " a month." << std::endl; //print monthlyPayment
	std::cout << std::endl;

	return 0;
}
/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 12
junhak.lee@usc.edu
*/
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

void conversion(double& money, std::string& currencyType, std::string currencyTypes[], double conversionValues[]) //conversion function
{
	for (int index = 0; index <= 3; index++)
	{
		if (currencyType == currencyTypes[index]) //matches type entered and types in array
		{
			money = money*conversionValues[index]; //computes conversion
			break;
		}
		if (index == 3) //if invalid input
		{
			std::cout << "INVALID CURRENCY! CONVERSION NOT PROCESSED!" << std::endl;
			currencyType = "USD";
		}
	}
}

int main()
{
	const int NUM_CURRENCIES = 4; //create necessary variables and arrays
	const int CONVERSION_VALUES = 4;
	std::string currencyTypes[NUM_CURRENCIES] = { "EUR", "JPY", "GBP", "CAD" };
	double conversionValues[CONVERSION_VALUES] = { 0.79, 107.29, 0.62, 1.12 };
	double money;
	double origUSD;
	std::string currencyType;

	std::cout << "Enter USD amount (whole dollars): "; //request and input variables
	std::cin >> money;
	origUSD = money;
	std::cout << "Enter currency type (EUR, JPY, GBP, or CAD): ";
	std::cin >> currencyType;

	conversion(money, currencyType, currencyTypes, conversionValues); //call function conversion

	std::cout << "Converting " << origUSD << " USD." << std::endl; //output results
	std::cout << "You now have " << money << " " << currencyType << "." << std::endl;
	
	return 0;
}
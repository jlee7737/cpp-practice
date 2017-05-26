//
//Junhak Lee
//ITP 165, Fall 2014
//Homework 2
//junhak.lee@usc.edu
//

#include <iostream>
#include <string>

int main()
{
	double temp; //create variables
	double convertedTemp;
	std::string units;

	std::cout << "Enter a temperature in degrees (example: 29.6): "; //request temp value
	std::cin >> temp; //store temp value

	std::cout << "Enter 'F' (or 'f') for Fahrenheit or 'C' (or 'c') for Celsius: "; //request unit type
	std::cin >> units; //store unit type

	if ((units == "c")||(units == "C")) //test unit type
	{
		convertedTemp = ((9 * temp) / 5) + 32; //perform conversion
		std::cout << temp << " degrees C = " << convertedTemp << " degrees F" << std::endl; //output result
	}
	else if ((units == "f") || (units == "F")) //test unit type
	{
		convertedTemp = (5 * (temp - 32)) / 9; //perform conversion
		std::cout << temp << " degrees F = " << convertedTemp << " degrees C" << std::endl; //output result
	}
	else //unit type entered was invalid
	{
		std::cout << "Error! Please follow directions correctly and try again" << std::endl; //output error
	}
	return 0;
}
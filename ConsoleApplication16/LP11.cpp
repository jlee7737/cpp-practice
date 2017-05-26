/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 11
junhak.lee@usc.edu
*/

#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

double Gamma(double velocity) //gamma function
{
	const double light = 300000000;
	double gamma = 1 / (sqrt(1 - ((std::pow(velocity, 2)) / (std::pow(light, 2))))); //compute function
	return gamma;
}

double Lorentz(double length, double gamma) //lorentz function
{
	double valueLorentz = length / gamma; //compute function
	return valueLorentz;
}

int main()
{
	const double light = 300000000; //created variables
	double velocity; 
	double length;
	double valueLorentz;

	std::cout << "Enter velocity (m/s): "; //request and input variables
	std::cin >> velocity;
	std::cout << "Enter length (n): ";
	std::cin >> length;

	valueLorentz = Lorentz(length, Gamma(velocity)); //call functions

	std::cout << "Length at rest: " << length << " meters" << std::endl; //print results
	std::cout << "Observed length: " << valueLorentz << " meters" << std::endl;
	std::cout << "Percent Speed of light: " << velocity / light << "c" << std::endl;

	return 0;
}
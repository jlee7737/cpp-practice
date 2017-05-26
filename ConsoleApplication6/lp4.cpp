//
//Junhak Lee
//ITP 165, Fall 2014
//Lab Practical 4
//junhak.lee@usc.edu
//
#include <iostream>
#include <string>

int main()
{
	int bit7; //make bit places
	int bit6;
	int bit5;
	int bit4;
	int bit3;
	int bit2;
	int bit1;
	int bit0;
	int decNum; //make decimal number variable

	std::cout << "Enter 7th bit: "; //request 1 or 0 and input into variable
	std::cin >> bit7;
	std::cout << "Enter 6th bit: ";
	std::cin >> bit6;
	std::cout << "Enter 5th bit: ";
	std::cin >> bit5;
	std::cout << "Enter 4th bit: ";
	std::cin >> bit4;
	std::cout << "Enter 3rd bit: ";
	std::cin >> bit3;
	std::cout << "Enter 2nd bit: ";
	std::cin >> bit2;
	std::cout << "Enter 1st bit: ";
	std::cin >> bit1;
	std::cout << "Enter 0th bit: ";
	std::cin >> bit0;

	//calculates binary number to decimal number
	decNum = (bit7*(pow(2, 7))) + (bit6*(pow(2, 6))) + (bit5*(pow(2, 5))) + (bit4*(pow(2, 4))) + (bit3*(pow(2, 3))) + (bit2*(pow(2, 2))) + (bit1*(pow(2, 1))) + (bit0*(pow(2, 0)));

	//outputs vinary number and decimal form 
	std::cout << bit7 << bit6 << bit5 << bit4 << bit3 << bit2 << bit1 << bit0 << " in binary is " << decNum << std::endl;

	return 0;
}
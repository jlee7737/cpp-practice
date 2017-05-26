/*
Junhak Lee
ITP 165, Fall 2014
Homework 6
junhak.lee@usc.edu
*/
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

int printWord(char letter) //printWord function gets letter position to attribute
{
	int letterPos;
	if (letter >= 65 && letter <= 90) //if uppercase letter
	{
		letterPos = letter - 65; //match to attribute
	}
	if (letter >= 97 && letter <= 122) //if lowercase letter
	{
		letterPos = letter - 97; //match to attribute
	}
	return letterPos; //return var
}

int main()
{
	const int NAME_MAX_LENGTH = 100; //create necessary variables and arrays
	const int NUM_ATTRIBUTES = 26;
	char firstName[NAME_MAX_LENGTH];
	int firstNameLength;
	//list of attributes in array
	std::string attributes[NUM_ATTRIBUTES] = {"Amazing", "Beautiful", "Charming", "Daring", "Elegant", "Fantastic", "Glorious", "Humble", "Impressive", "Joyous", "Kind", "Loving", "Merciful", "Nice", "Optimistic", "Patient", "Quintessential", "Respectful", "Strong", "Trustworthy", "Understanding", "Valiant", "Wise", "X-traordinary", "Yearning", "Zealous"};

	std::cout << "Enter your first name: "; //request and input initial variables
	std::cin >> firstName;
	firstNameLength = std::strlen(firstName);

	for (int index = 0; index < firstNameLength; index++) //loop to print letter and attribute
	{
		if (firstName[index] == 0) //break out of loop
		{
			break;
		}
		else
		{
			std::cout << firstName[index] << ": " << attributes[printWord(firstName[index])] << std::endl; //prints letter and attribute
		}
	}
	return 0;
}

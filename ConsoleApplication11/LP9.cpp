/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 9
junhak.lee@usc.edu
*/
#include <iostream>
#include <string>
#include <cmath>

int main()
{
	const int LENGTH = 100; //create necessary variables and array
	char word[LENGTH];
	int counter = 0;

	std::cout << "Enter a word with at most 99 characters: " << std::endl; //request and input char array
	std::cin >> word;

	for (int index = 0; index <= 99; index++) //loop through word array
	{
		if (word[index] == 0) //condition if 
		{
			break; //break off loop
		}
		else
		{
			counter++; //add to word length counter
		}
	}
	std::cout << "String is " << counter << " characters long." << std::endl; //print result

	return 0;
}
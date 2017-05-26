/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 6
junhak.lee@usc.edu
*/

#include <iostream>
#include <string>
#include <cmath>

int main()
{
	int countNum; //create necessary variables
	int limitNum;
	int multSeq = 0; //initialize multiple sequence variable

	std::cout << "Enter a multiple to count by starting from 0 (3, 5, 8...): "; //request number to count multiples of
	std::cin >> countNum; //input countNum

	std::cout << "Enter the limit number: "; //request limit number
	std::cin >> limitNum; //input limitNum

	while (multSeq <= limitNum) //loop print sequence
	{
		std::cout << multSeq << std::endl; //print current number in sequence
		multSeq = multSeq + countNum; //add multiple variable
	}
	return 0;
}




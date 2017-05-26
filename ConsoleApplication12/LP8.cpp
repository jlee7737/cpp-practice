/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 8
junhak.lee@usc.edu
*/
#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::cout << "Fibonacci Sequence" << std::endl; //title
	const int fibLength = 10; //set constant length of fibonacci array as 10
	int fibSeq[fibLength]; //create fibSeq array
	fibSeq[0] = 1; //set index 1 value
	fibSeq[1] = 1; //set index 2 value

	for (int index = 0; index < fibLength; index++) //run for loop to print fibonacci sequence
	{
		if ((index == 0) || (index == 1)) //if index is 1 or 0, print values that were already assigned
		{
			std::cout << index << ": " << fibSeq[index] << std::endl; //print next index of fibSeq
		}
		else //when index gets greater than 1, compute this sequence and loop over
		{
			fibSeq[index] = fibSeq[index - 1] + fibSeq[index - 2]; //compute next index according to fibonacci sequence
			std::cout << index << ": " << fibSeq[index] << std::endl; //print next index of fibSeq
		}		
	}	
	return 0;
}


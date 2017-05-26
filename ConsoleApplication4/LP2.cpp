//
//Junhak Lee
//ITP 165, Fall 2014
//Lab Practical 2
//junhak.lee@usc.edu
//
#include <iostream>
#include <string>

int main()
{
	double grade_percent; //create double variable for grade percent

	std::cout << "Enter your grade in percent form (i.e 92.5 for 92.5%): "; //request grade percent
	std::cin >> grade_percent; //input grade percent

	if (grade_percent >= 90) //test if 90 or above
	{
		std::cout << "Your grade is an A" << std::endl; //output result
		return 0;
	}
	else if (grade_percent >= 80) //test if 80 or above
	{
		std::cout << "Your grade is a B" << std::endl; //output result
		return 0;
	}
	else if (grade_percent >= 70) //test if 70 or above
	{
		std::cout << "Your grade is a C" << std::endl; //output result
		return 0;
	}
	else if (grade_percent >= 60) //test if 60 or above
	{
		std::cout << "Your grade is a D" << std::endl; //output result
		return 0;
	}
	else //doesn't match any criteria above
	{
		std::cout << "Your grade is an F" << std::endl; //output result
		return 0;
	}
}

//
//Junhak Lee
//ITP 165, Fall 2014
//Lab Practical 1
//junhak.lee@usc.edu
//

#include <iostream>
#include <string>

int main()
{
	bool A; //create 2 boolean variables
	bool B;

	std::cout << "Enter 1st Boolean value (0 for false, 1 for true): " << std::endl; //request 1st boolean value
	std::cin >> A; //input 1st boolean value
	std::cout << "Enter 2nd Boolean value (0 for false, 1 for true): " << std::endl; //request 2nd boolean value
	std::cin >> B; //input 2nd boolean value

	std::cout << "A && B = " << (A && B) << std::endl; //print truth table evaluations
	std::cout << "A || B = " << (A || B) << std::endl;
	std::cout << "!A = " << !A << std::endl;
	std::cout << "!B = " << !B << std::endl;

	std::cout << "**************************************" << std::endl; //separating line

	double X; //create 2 double variables
	double Y;

	std::cout << "Enter 1st Double value: " << std::endl; //request 1st double value
	std::cin >> X; //input 1st double value
	std::cout << "Enter 2nd Double value: " << std::endl; //request 2nd couble value
	std::cin >> Y; //input 2nd double value

	std::cout << "X > Y = " << (X > Y) << std::endl; //print double values logic test 
	

	return 0;

}

//
//Junhak Lee
//ITP 165, Fall 2014
//Lab Practical 3
//junhak.lee@usc.edu
//
#include <iostream>
#include <string>

int main()
{
	double num1; //create double and int variables
	double num2;
	int operationChoice;

	std::cout << "Binary Calculator" << std::endl; //title

	std::cout << "Enter 1st number: "; //ask for 1st number
	std::cin >> num1;

	std::cout << "Enter 2nd number: "; //ask for 2nd number
	std::cin >> num2;

	std::cout << "Choose an option:" << std::endl; //ask for binary calc options
	std::cout << "1. Add" << std::endl;
	std::cout << "2. Subtract" << std::endl;
	std::cout << "3. Multiply" << std::endl;
	std::cout << "4. Divide" << std::endl;
	std::cin >> operationChoice; //store choice

	switch (operationChoice) //refer to choice in operationChoice & choose case
	{
	case 1: //do addition
		std::cout << num1 << " + " << num2 << " = " << (num1 + num2) << std::endl;
		break;
	case 2: //do subtraction
		std::cout << num1 << " - " << num2 << " = " << (num1 - num2) << std::endl;
		break;
	case 3: //do multiplication
		std::cout << num1 << " * " << num2 << " = " << (num1 * num2) << std::endl;
		break;
	case 4: //do division
		if (num2 == 0)
		{
			std::cout << "Error! Divison by 0 not possible!" << std::endl;
		}
		else
		{
			std::cout << num1 << " / " << num2 << " = " << (num1 / num2) << std::endl;
		}
		break;
	default:
		std::cout << "Invalid choice" << std::endl;
	}
}
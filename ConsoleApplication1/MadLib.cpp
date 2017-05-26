//
//Junhak Lee
//ITP 165, Fall 2014
//Homework 1
//junhak.lee@usc.edu
//

#include <iostream>
#include <string>

int main()
{
	std::string countryValue;
	std::string adjectiveValue;
	std::string name1Value;
	std::string name2Value;
	double numberValue;

	std::cout << "Enter name of a country: "; //requests & inputs values for string and double variables
	std::cin >> countryValue;
	std::cout << "Enter an adjective: ";
	std::cin >> adjectiveValue;
	std::cout << "Enter name of person 1: ";
	std::cin >> name1Value;
	std::cout << "Enter name of person 2: ";
	std::cin >> name2Value;
	std::cout << "Enter a number greater than 1: ";
	std::cin >> numberValue;

	std::cout << std::endl;

	std::cout << "There was a \"" << adjectiveValue << "\" person named \"" << name1Value << "\" from \"" << countryValue << "\"." << std::endl;
	std::cout << "\"" << name1Value << "\" had \"" << numberValue << "\" problems, but \"" << name2Value << "\" wasn't one." << std::endl;

	std::cout << std::endl;

	return 0;
}

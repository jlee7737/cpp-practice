/*
Junhak Lee
ITP 165, Fall 2014
Homework 7-2
junhak.lee@usc.edu
*/
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

//#1=========================================================================
bool validateBet(int num1, int num2){ //create function, return type, and parameters
	if ((num1 > 0) && (num1 <= num2)){ //check conditions
		return 1;
	}
	else{
		return 0;
	}
}
//#2=========================================================================
bool validateSelection(int num){ //create function, return type, and parameters
	if (num >= 0 && num <= 37){ //check conditions
		return 1;
	}
	else{
		return 0;
	}

}
//#3=========================================================================
bool validateSelection(char letter){ //create function, return type, and parameters
	if (letter == 66 || letter == 98 || letter == 71 || letter == 103 || letter == 82 || letter == 114){ //check conditions
		return 1;
	}
	else{
		return 0;
	}
}
//#4=========================================================================
bool isGreenNumber(int num){ //create function, return type, and parameters
	if (num == 0 || num == 37){ //check conditions
		return 1;
	}
	else{
		return 0;
	}
}
//#5=========================================================================
bool isRedNumber(int num){ //create function, return type, and parameters
	if (num % 2 == 1){ //check conditions
		if ((num >= 1 && num <= 10) || (num >= 19 && num <= 28)){ //check conditions
			return 1;
		}
	}
	else if (num % 2 == 0){ //check conditions
		if ((num >= 11 && num <= 18) || (num >= 29 && num <= 36)){ //check conditions
			return 1;
		}
	}
	else{
		return 0;
	}
	return 0;
}
//#6=========================================================================
bool isBlackNumber(int num){ //create function, return type, and parameters
	if (num % 2 == 0){ //check conditions
		if ((num >= 1 && num <= 10) || (num >= 19 && num <= 28)){ //check conditions
			return 1;
		}
	}
	else if (num % 2 == 1){ //check conditions
		if ((num >= 11 && num <= 18) || (num >= 29 && num <= 36)){ //check conditions
			return 1;
		}
	}
	else{
		return 0;
	}
	return 0;
}
//#7=========================================================================
char colorResult(int charNum){ //create function, return type, and parameters
	if (isRedNumber(charNum) == 1){ //check conditions
		std::cout << "Spun a Red " << charNum << "!" <<std::endl; //print result
		return 'r'; //return result
	}
	else if (isBlackNumber(charNum) == 1){ //check conditions
		std::cout << "Spun a Black " << charNum << "!" << std::endl; //print result
		return 'b'; //return result
	}
	else if (isGreenNumber(charNum) == 1){ //check conditions
		std::cout << "Spun a Green " << charNum << "!" << std::endl; //print result
		return 'g'; //return result
	}
	else{
		std::cout << "none are true" << std::endl; //print result
		return 0; //return result
	}
}
//#8=========================================================================
int spinWheel(){ //create function, return type, and parameters
		int random; //create necessary variables
		random = std::rand() % 38; //get random variable
		return random; //return result
}
void betOnNumber(int& totalCash){ //create function, return type, and parameters
	int betAmount; //create necessary variables
	int selection;
	int spinResult;
	std::cout << "Enter an amount to bet: "; //request and input variable betAmount
	std::cin >> betAmount;
	if (validateBet(betAmount, totalCash) == 0){ //check conditions
		std::cout << "Error! Invalid bet!" << std::endl; //print result
	}
	else{
		std::cout << "\tEnter a number between 0 through 36" << endl; //request and input variable selection
		std::cout << "\tPayout is 35:1, enter 37 for 00 (double zero): ";
		std::cin >> selection;
		cout << endl;
		if (validateSelection(selection) == 0){ //check conditions
			std::cout << "Error! Invalid selection!" << std::endl; //print result
		}
		else{
			spinResult = spinWheel(); //assign spinResult to random number by calling spinWheel
			colorResult(spinResult); //calls colorResult function with spinResult as parameter
			if (spinResult == selection){ //check conditions
				std::cout << "*** YOU WON ***" << std::endl; //print result
				totalCash = totalCash + (betAmount * 35); //compute totalCash
			}
			else{
				std::cout << "*** YOU LOST ***" << std::endl; //print result
				totalCash = totalCash - betAmount; //compute totalCash
			}
			std::cout << "You now have " << totalCash << " in total." << std::endl; //print result
		}
	}
}
//#9=========================================================================
void betOnColor(int& totalCash){ //create function, return type, and parameters
	int betAmount; //create necessary variables
	char selection;
	int spinResult;
	std::cout << "Enter an amount to bet: "; //request and input variable betAmount
	std::cin >> betAmount;
	if (validateBet(betAmount, totalCash) == 0){ //check conditions
		std::cout << "Error! Invalid bet!" << std::endl; //print result
	}
	else{
		cout << "\tB --> Play BLACK, Payout is 1:1" << endl;//request and input variable selection
		cout << "\tR --> Play RED, Payout is 1:1" << endl;
		cout << "\tG --> Play GREEN, Payout is 17:1" << endl;
		cout << "\tPlease select B, R, or G: ";
		std::cin >> selection;
		cout << endl;
		if (validateSelection(selection) == 0){ //check conditions
			std::cout << "Error! Invalid selection!" << std::endl; //print result
		}
		else{
			spinResult = spinWheel();  //assign spinResult to random number by calling spinWheel
			if (colorResult(spinResult) == selection){ //check conditions
				std::cout << "*** YOU WON ***" << std::endl; //print result
				if (selection == 66 || selection == 98 || selection == 82 || selection == 114){ //check conditions
					totalCash = totalCash + betAmount; //compute totalCash
				}
				if (selection == 71 || selection == 103){ //check conditions
					totalCash = totalCash + (betAmount * 17); //compute totalCash
				}
			}
			else{
				std::cout << "*** YOU LOST ***" << std::endl; //print result
				totalCash = totalCash - betAmount; //compute totalCash
			}
			std::cout << "You now have " << totalCash << " in total." << std::endl; //print result
		}	
	}
}

int main()
{
	std::srand((unsigned int)std::time(0));

	int totalCash = 1000; //create initial variables
	int select;
	cout << "========================================================" << endl; //title and begin settings
	cout << "==========Welcome to Casino ITP, Roulette 165!==========" << endl;
	cout << "========================================================" << endl;
	cout << "You cashed in with 1000 chips!" << endl;
	
	do{
		cout << endl;
		cout << "---------------------------" << endl;
		cout << "What would you like to do?" << endl; //shows selection options
		cout << "1. Cash Out" << endl;
		cout << "2. Bet on a color" << endl;
		cout << "3. Bet on a number" << endl;
		cout << "Choice: ";
		cin >> select; //input selection

		switch (select)
		{
		case 1: //runs cash out option
			cout << "Cashing out with " << totalCash << " chips. Have a nice day!" << endl;
			cout << endl;
			break;
		case 2: //calls on betOnColor function with totalCash as parameter
			betOnColor(totalCash);
			break;
		case 3: //calls on betOnNumber function with totalCash as parameter
			betOnNumber(totalCash);
			break;
		default: //default
			cout << "Invalid choice" << endl;
		}
	} while (select != 1); //runs until one cashes out

	return 0;
}
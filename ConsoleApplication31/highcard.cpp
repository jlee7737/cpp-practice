/*
ITP 165, Fall 2014
Homework 11 - High Card
Name: Junhak Lee
Email: junhak.lee@usc.edu
*/
#include "Card.h"
#include "Deck.h"
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	cout << "Starting game!" << endl;
	cout << "================================" << endl;

	Deck deck1; //initialize 2 decks
	Deck deck2;
	int p1Score = 0; //initialize p1 and p2 score
	int p2Score = 0;
	Card p1TopCard; //card var to hold top card in deck
	Card p2TopCard;

	int round = 0; //initialize round number

	string playAgain;
	while (playAgain != "n")
	{
		round++; //next round counter
		cout << "Round " << round << endl; //round number
		deck1.shuffle(); //shuffle 2 decks
		deck2.shuffle();

		p1TopCard = deck1.getTopCard(); //gets and stores top card of each player's decks
		p2TopCard = deck2.getTopCard();

		cout << "Player 1 drew "; //print what each player drew
		p1TopCard.printCard();
		cout << endl;
		cout << "Player 2 drew ";
		p2TopCard.printCard();
		cout << endl;
		
		if (p1TopCard.isRankEqual(p2TopCard)) { //test if equal
			cout << "Round tied!" << endl;
		}
		else if (p1TopCard.isRankGreaterThan(p2TopCard)) { //test if p1 card greater than p2 card
			p1Score++; //count up p1 score
			cout << "Player 1 wins this round!" << endl;
		}
		else if (p1TopCard.isRankLessThan(p2TopCard)) { //test if p1 card less than p2 card
			p2Score++; //count up p2 score
			cout << "Player 2 wins this round!" << endl;
		}

		if (p1Score == p2Score) { //print current scores and who's winning
			cout << "The game is all tied up at " << p1Score << endl;
		}
		else if (p1Score > p2Score) {
			cout << "Player 1 is winning " << p1Score << "-" << p2Score << endl;
		}
		else if (p1Score < p2Score) {
			cout << "Player 2 is winning " << p2Score << "-" << p1Score << endl;
		}

		cout << "Would you like to play again? (y/n): "; //ask if play again
		cin >> playAgain;
		while (!(playAgain == "y" || playAgain == "n")) //if invalid input
		{
			cout << "Invalid choice." << endl;
			cout << "Would you like to play again? (y/n): ";
			cin >> playAgain;
		}
		cout << "-----------------------------" << endl;
	}
	cout << "Goodbye!" << endl;
	return 0;
}
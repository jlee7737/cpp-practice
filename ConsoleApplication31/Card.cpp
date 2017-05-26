/*
ITP 165, Fall 2014
Homework 11 - High Card
Name: Junhak Lee
Email: junhak.lee@usc.edu
*/
#include "Card.h" //reads from Card.h
void Card::set(int rank, string suit) { //setter function
	mRank = rank;
	mSuit = suit;
}
void Card::printCard() { //print card function, prints rank and suit of card
	if (mRank <= 10) { //if number card
		cout << mRank << " of " << mSuit;
	}
	else { //for non-number cards
		if (mRank == 11) {
			cout << "Jack of " << mSuit;
		}
		else if (mRank == 12) {
			cout << "Queen of " << mSuit;
		}
		else if (mRank == 13) {
			cout << "King of " << mSuit;
		}
		else if (mRank == 14) {
			cout << "Ace of " << mSuit;
		}
	}
}
bool Card::isRankEqual(Card card) { //compares if equal 
	if (mRank == card.mRank) {
		return 1;
	}
	else {
		return 0;
	}
}
bool Card::isRankLessThan(Card card) { //compares if less than
	if (mRank < card.mRank)	{
		return 1;
	}
	else {
		return 0;
	}
}
bool Card::isRankGreaterThan(Card card) { //compares if greater than
	if (mRank > card.mRank)	{
		return 1;
	}
	else {
		return 0;
	}
}

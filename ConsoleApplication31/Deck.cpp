/*
ITP 165, Fall 2014
Homework 11 - High Card
Name: Junhak Lee
Email: junhak.lee@usc.edu
*/
#include "Deck.h" //read from Deck.h
#include <random>
#include <algorithm>
const int deckSize = 52; //num cards in deck variable
Deck::Deck() {	//initializes deck
	mCards = new Card[deckSize]; //dynamically allocated array
	int count = 2;
	for (int i = 0; i < deckSize; i = i + 4) {
		mCards[i].set(count, "Clubs");
		mCards[i + 1].set(count, "Diamonds");
		mCards[i + 2].set(count, "Hearts");
		mCards[i + 3].set(count, "Spades");
		count++;
	}
}
Deck::~Deck() { //destructor function
	delete[] mCards;
}
void Deck::print() { //function prints entire deck
	int count = 0;
	for (int i = 0; i < deckSize; i++) {
		mCards[i].printCard();
		cout << ", ";
		count++;
		if (count == 4) {
			cout << endl;
			count = 0;
		}
	}
}
void Deck::shuffle() { //shuffle function
	std::shuffle(&mCards[0], &mCards[52], std::random_device());
}
Card Deck::getTopCard() { //function returns top card of deck
	return mCards[0];
}
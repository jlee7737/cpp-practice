/*
ITP 165, Fall 2014
Homework 11 - High Card
Name: Junhak Lee
Email: junhak.lee@usc.edu
*/
#pragma once
#include "Card.h" //read from Card.h
class Deck { //deck class
private: //member variables
	Card* mCards;
public:
	Deck(); //default constructor
	~Deck(); //destructor
	void print(); //member functions
	void shuffle();
	Card getTopCard();
};
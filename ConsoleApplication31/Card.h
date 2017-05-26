/*
ITP 165, Fall 2014
Homework 11 - High Card
Name: Junhak Lee
Email: junhak.lee@usc.edu
*/
#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;
class Card { //card class
private: //member variables
	int mRank;
	string mSuit;
public: 
	void set(int rank, string suit); //setter
	void printCard(); //member functions
	bool isRankEqual(Card card);
	bool isRankLessThan(Card card);
	bool isRankGreaterThan(Card card);
};
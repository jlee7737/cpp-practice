/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 22
junhak.lee@usc.edu
*/
#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Binary
{
private:
	int mArray[32]; //member variable
public:
	Binary::Binary(); //default constructor
	void set(int b); //member functions
	void print();
};

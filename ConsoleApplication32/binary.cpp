/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 22
junhak.lee@usc.edu
*/
#include "binary.h"
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;

Binary::Binary(){ //default constr.
	set(0);
}

void Binary::set(int b){ //binary converter function
	for (int i = 0; i < 32; i++){
		if (b >= std::pow(2, 31 - i)){
			mArray[i] = 1;
			b -= std::pow(2, 31 - i);
		}
		else{
			mArray[i] = 0;
		}
	}
}

void Binary::print(){ //print function
	for (int j = 0; j < 32; j++){
		cout << mArray[j];
	}
}


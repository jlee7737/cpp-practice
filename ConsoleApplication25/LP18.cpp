/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 18
junhak.lee@usc.edu
*/
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

struct Circle //circle structure
{
	double radius; //variables in circle structure
	double x;
	double y;
	const double pi = 3.1415;
};

int main()
{
	Circle testCircle; //instance of Circle structure

	cout << "Enter X location: "; //ask and input x
	cin >> testCircle.x;

	cout << "Enter y location: "; //ask and input y
	cin >> testCircle.y;

	do{ //ask and input radius until input is valid
		cout << "Enter a radius greater than 0: ";
		cin >> testCircle.radius;
	} while (testCircle.radius <= 0);

	cout << "X: " << testCircle.x << endl; //print x, y, and area of circle calculated using member variables
	cout << "Y: " << testCircle.y << endl;
	cout << "The area of the circle is: " << (testCircle.pi)*(std::pow(testCircle.radius,2)) << endl;
	
	return 0;
}
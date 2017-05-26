/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 20
junhak.lee@usc.edu
*/
#include "Shapes.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	double x1; //variables 
	double x2;
	double x3;
	double y1;
	double y2;
	double y3;
	double triArea; //to hold triangle area

	cout << "Please enter an x1 location: "; //request and input
	cin >> x1;
	cout << "Please enter an x2 location greater than x1: ";
	cin >> x2;
	cout << "Please enter an x3 location: ";
	cin >> x3;
	cout << "Please enter a y1 location: ";
	cin >> y1;
	cout << "Please enter a y2 location greater than or equal to y1: ";
	cin >> y2;
	cout << "Please enter a y3 location greater than y2: ";
	cin >> y3;

	Point p1(x1, y1); //create 3 points from inputs
	Point p2(x2, y2);
	Point p3(x3, y3);
	Triangle testTriangle(p1, p2, p3); //create triangles with 3 points
	triArea = testTriangle.getArea(); //get area of triangle
	cout << "The area of the triangle given by: " << endl; //output result
	cout << "(" << p1.getX() << "," << p1.getY() << "),(" << p2.getX() << "," << p2.getY() << "),(" << p3.getX() << "," << p3.getY() << ") is " << triArea << endl;

	return 0;
}
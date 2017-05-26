#include "Shapes.h"
#include <iostream>

// Default constructor
Point::Point() {
	set(0, 0);
}
// Constructor w/ parameters
Point::Point(double x, double y) {
	set(x, y);
}
// Getters/setters
double Point::getX() {
	return mX;
}
double Point::getY() {
	return mY;
}
void Point::set(double x, double y) {
	mX = x;
	mY = y;
}

// Constructor w/ parameters
Line::Line(double s, double i) {
	mSlope = s;
	mInter = i;
}
Line::Line(Point p1, Point p2) {
	set(p1, p2);
}
// Getters/setters
double Line::getSlope() {
	return mSlope;
}
double Line::getInter() {
	return mInter;
}
void Line::set(Point p1, Point p2) {
	mSlope = (p1.getY() - p2.getY()) / (p1.getX() - p2.getX());
	mInter = p1.getY() - (mSlope*p1.getX());
}

// Constructor w/ parameters
Triangle::Triangle(Point p1, Point p2, Point p3) {
	mP1 = p1;
	mP2 = p2;
	mP3 = p3;
}
double Triangle::getArea() {
	Line base(mP1, mP2); //create line base
	double hLineSlope; //create variables
	double hLineInter;
	double hLength;
	double bLength;
	double Xi;
	double Yi;

	if (base.getSlope() == 0) //if slope of base line is 0
	{
		bLength = sqrt(std::pow((mP2.getX() - mP1.getX()), 2) + std::pow((mP2.getY() - mP1.getY()), 2)); //calc line lengths
		hLength = mP3.getY() - mP2.getY();
	}
	else //if slope of base line is not 0
	{
		hLineSlope = (-1) / base.getSlope(); //calculate slope

		hLineInter = mP3.getY() - hLineSlope*(mP3.getX()); //calc height line intercept
		Line height(hLineSlope, hLineInter); //create height line

		Xi = (base.getInter() - height.getInter()) / (height.getSlope() - base.getSlope()); //intersection point coordinates
		Yi = Xi*base.getSlope() + base.getInter();

		bLength = sqrt(std::pow((mP2.getX() - mP1.getX()), 2) + std::pow((mP2.getY() - mP1.getY()), 2)); //calc line lengths
		hLength = sqrt(std::pow((mP3.getX() - Xi), 2) + std::pow((mP3.getY() - Yi), 2));
	}

	double area = (bLength*hLength) * 0.5; //calc triangle area

	return area;
}
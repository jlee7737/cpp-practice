#pragma once

class Point
{
private:
	double mX;
	double mY;
public:
	// Default constructor
	Point();
	// Constructor with parameters
	Point(double x, double y);
	// Getters/setter
	double getX();
	double getY();
	void set(double x, double y);
};

class Line
{
private:
	double mSlope;
	double mInter;
public:
	// Constructor with parameters
	Line(double s, double i);
	Line(Point p1, Point p2);
	// Getters/setter
	double getSlope();
	double getInter();
	void set(Point p1, Point p2);
};

class Triangle
{
private:
	Point mP1;
	Point mP2;
	Point mP3;
public:
	// Constructor with parameters
	Triangle(Point p1, Point p2, Point p3);
	//void set(Point p1, Point p2, Point p3);
	double getArea();
};
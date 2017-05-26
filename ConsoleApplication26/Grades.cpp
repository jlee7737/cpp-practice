/*
Junhak Lee
ITP 165, Fall 2014
Homework 9
junhak.lee@usc.edu
*/
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;

double* buildArray(int arraySize) //function returns double pointer that points to an array declared on heap
{
	double* myArray = new double[arraySize]; //double pointer that points to an array on heap
	return myArray; //returns pointer array
}

double summation(double array[], int arraySize) //function adds all elements inside array
{
	double sum = 0; //create variable to hold sum
	for (int i = 0; i < arraySize; i++) //goes through loop and sums all elements in array
	{
		sum = sum + array[i];
	}
	return sum; //returns sum
}

double buildHW() //function builds graded hw and total hw score arrays
{
	int numHwTotal; //necessary variables
	int numHwGraded;

	cout << "How many total HW assignments? "; //requests and input values
	cin >> numHwTotal;
	cout << "How many graded HW assignments? ";
	cin >> numHwGraded;

	double* hwGrade = buildArray(numHwTotal); //creates double pointer to hold graded hw on the heap
	for (int i = 0; i < numHwTotal; i++) //loops through to assign graded hw values and expected hw values
	{
		if (i < numHwGraded)
		{
			cout << "What is your grade for HW assignment " << i + 1 << "? "; //request and input graded hw values
			cin >> hwGrade[i];
		}
		else
		{
			double percent = 0; //variable to hold percent
			cout << "What percentage do you think you will score on HW assignment " << i + 1 << "? "; //request and input expected hw grade %
			cin >> percent;
			hwGrade[i] = (percent / 100) * 40; //calculates points based on percentage
		}
	}

	double* hwTotal = buildArray(numHwTotal); //creates double pointer to hold total hw score on the heap
	for (int j = 0; j < numHwTotal; j++) //loops through to assign total hw score
	{
		if (j < numHwGraded)
		{
			cout << "What is the total amount possible for HW assignment " << j + 1 << "? "; //request and input total hw score
			cin >> hwTotal[j];
		}
		else
		{
			hwTotal[j] = 40; //assigns rest of hw total score as 40
		}
	}	
	double sumHwGrade = summation(hwGrade, numHwTotal); //sum of graded hw
	double sumHwTotal = summation(hwTotal, numHwTotal); //sum of total hw score
	double hwPercent; //variable to hold hw percent
	hwPercent = (sumHwGrade / sumHwTotal) * 100; //calculate hw percent
	
	delete hwGrade; //delete dynamic memory allocations
	delete hwTotal;

	return hwPercent; //returns hw percent value
}

double buildLP()
{
	int numLpTotal; //create necessary variables
	int numLpGraded;

	cout << "How many total LPs? "; //request and input variables
	cin >> numLpTotal;
	cout << "How many graded LPs? ";
	cin >> numLpGraded;

	double* lpGrade = buildArray(numLpTotal); //creates graded lp values array on the heap
	for (int i = 0; i < numLpTotal; i++) //loops through to input graded lp values and expected lp values
	{
		if (i < numLpGraded)
		{
			do{ //do while lp grade is either 0 or 1
				cout << "What is your grade for LP " << i + 1 << "? "; //requests and input graded lp values
				cin >> lpGrade[i];
			} while (!((lpGrade[i] == 0) || (lpGrade[i] == 1)));
		}
		else
		{
			do{ //do while lp grade is either 0 or 1
				cout << "What do you think you will score on LP " << i + 1 << "? "; //requests and input expected lp values
				cin >> lpGrade[i];
			} while (!((lpGrade[i] == 0) || (lpGrade[i] == 1)));
		}
	}

	double sumLpGrade = summation(lpGrade, numLpTotal); //sums graded lp values

	double lpPercent; //create variable to hold lp percent

	lpPercent = (sumLpGrade / numLpTotal) * 100; //calculate lp percent

	delete lpGrade; //delete dynamic memory allocations

	return lpPercent; //returns lp percent value
}

double buildExams()
{
	double midtermScore; //create necessary variables
	double finalScore;

	cout << "What did you get on the midterm? "; //request and input exam values
	cin >> midtermScore;
	cout << "What do you expect to score on the final? ";
	cin >> finalScore;

	double examAvg = (midtermScore + finalScore) / 2; //calculates avg exam value

	return examAvg; //returns avg exam value
}

int main()
{
	double hwScore = buildHW(); //runs buildHW function and stores hw percent score in hwScore
	double lpScore = buildLP(); //runs buildLP function and stores lp percent score in lpScore
	double examScore = buildExams(); //runs buildExams function and stores exam percent score in examScore
	double finalGrade = hwScore*0.4 + lpScore*0.2 + examScore*0.4; //calculates final grade %
	cout << "Your predicted final percentage is " << finalGrade << "%" << endl; //prints final grade %
	return 0;
}
/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 17
junhak.lee@usc.edu
*/
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;
int main()
{
	double sum = 0; //create variables
	double mean = 0;
	double sumMeanDevSqr = 0;
	double stanDev = 0;

	int elemSize = 0; //create array size
	cout << "Enter a number of elements: ";
	cin >> elemSize;
	if (elemSize <= 0)
	{
		cout << "Invalid input!!!" << endl;
	}
	else
	{
		if (elemSize == 1)
		{
			stanDev = 0;
		}
		else
		{
			double* elemArray = new double[elemSize]; //dynamically allocate new array

			for (int i = 0; i < elemSize; i++) 
			{
				cout << "Enter a double: "; //request and input element
				cin >> elemArray[i];
				sum = sum + elemArray[i]; //sums the elements of array
			}
			mean = sum / elemSize; //calculate mean

			for (int j = 0; j < elemSize; j++) //calculate sum of mean deviation squared --> (x-xbar)^2
			{
				sumMeanDevSqr = sumMeanDevSqr + std::pow((elemArray[j] - mean), 2);
			}
			stanDev = sqrt(sumMeanDevSqr / elemSize); //calc stan dev
		}
		cout << "Calculating standard deviation..." << endl;
		cout << "The standard deviation is " << stanDev << endl;
	}
	return 0;
}

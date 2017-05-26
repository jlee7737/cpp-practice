/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 13
junhak.lee@usc.edu
*/
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	std::string iFile; //creates necessary variables
	std::string oFile;

	cout << "Input file name: "; //request file names and inputs
	cin >> iFile;
	cout << "Output file name: ";
	cin >> oFile;

	std::ifstream fileInput(iFile); //create input and output fstreams
	std::ofstream fileOutput(oFile);

	if (fileInput.is_open()) //checks if file is open
	{
		while (fileInput.eof() != true) //check while it's not end of file
		{
			int num;
			fileInput >> num; //assigns num to file value
			fileOutput << num * 2 << endl; //computes and outputs to output file
		}
		cout << "Read/Write complete!" << endl; //complete!
	}
	else
	{
		cout << "Error! File not found!" << endl; //error!
	}
	
	return 0;
}




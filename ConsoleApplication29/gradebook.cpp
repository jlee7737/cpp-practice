/*
Junhak Lee
ITP 165, Fall 2014
Homework 10
junhak.lee@usc.edu
*/

#include <iostream>
#include <string>
#include <cmath>

struct Student //make student structure
{
	std::string name; //holds name
	double grade; //holds grade
};

void getStudentData(Student studentArray[], int numStudents) //function fills in student data
{
	for (int i = 0; i < numStudents; i++)
	{
		std::cout << "------------------" << std::endl;
		std::cout << "Student " << i << std::endl;

		std::cout << "Name: "; //prompt user for name
		std::cin >> studentArray[i].name;

		std::cout << "Grade (0.0 - 100.0): "; //prompt user for grade
		std::cin >> studentArray[i].grade;

		while (studentArray[i].grade < 0 || studentArray[i].grade > 100) //loop until valid input
		{
			std::cout << "Grade must be from 0.0 - 100.0." << std::endl;
			std::cout << "Grade (0.0 - 100.0): "; //prompt user for grade
			std::cin >> studentArray[i].grade;
		}
	}
	std::cout << "------------------" << std::endl;
}

void printGrades(Student studentArray[], int numStudents) //funciton that prints names and grades
{
	for (int i = 0; i < numStudents; i++) //loop through to print 
	{
		std::cout << studentArray[i].name << ", " << studentArray[i].grade << std::endl;
	}
}

double average(Student studentArray[], int numStudents) //function calculates average grade
{
	double sum = 0.0; //create variables
	double average;

	for (int i = 0; i < numStudents; i++) //loop through array to sum all grades up
	{
		sum = sum + studentArray[i].grade;
	}
	average = sum / numStudents; //calculates average from sum

	return average; //return average
}

std::string bestStudent(Student studentArray[], int numStudents) //function to get best student
{
	double highest = 0.0; //create variables
	std::string best = "";

	for (int i = 0; i < numStudents; i++) //loop through student array
	{
		if (studentArray[i].grade > highest) //compare and if the current index grade is higher
		{
			highest = studentArray[i].grade; //replace highest value
			best = studentArray[i].name; //replace best student name
		}
	}
	return best; //return best student name
}

std::string worstStudent(Student studentArray[], int numStudents) //function to get worst student
{
	double lowest = 100.0; //create variables
	std::string worst = "";

	for (int i = 0; i < numStudents; i++) //loop through student array
	{
		if (studentArray[i].grade < lowest) //compare and if the current index grade is lower
		{
			lowest = studentArray[i].grade; //replace lowest value
			worst = studentArray[i].name; //replace worst student name
		}
	}
	return worst; //return worst student name
}

int main()
{
	int numStudents; //create variable

	std::cout << "Enter number of students (1-10): "; //request and input number of students
	std::cin >> numStudents;

	while (!(numStudents >= 1 && numStudents <= 10)) //loop until valid input
	{
		std::cout << "Number of students must be from 1-10." << std::endl;
		std::cout << "Enter number of students (1-10): ";
		std::cin >> numStudents;
	}

	Student *studentArray = new Student[numStudents]; //dynamically allocates student array

	getStudentData(studentArray, numStudents); //calls getStudent function

	int select = 0; //create variables for menu operation
	bool quit = 0;

	std::cout << "Select option" << std::endl; //options menu
	std::cout << "1. Print All Grades" << std::endl;
	std::cout << "2. Best Student" << std::endl;
	std::cout << "3. Worst Student" << std::endl;
	std::cout << "4. Average" << std::endl;
	std::cout << "5. Quit" << std::endl;

	while (!quit) //while user doesn't quit
	{
		std::cout << "Select 1-5: "; //request and input selection
		std::cin >> select;

		switch (select) //switch options
		{
		case 1: //option to call printGrade function
			printGrades(studentArray, numStudents);
			break;
		case 2: //option to call bestStudent function
			std::cout << "The best student is " << bestStudent(studentArray, numStudents) << std::endl;
			break;
		case 3: //option to call worstStudent function
			std::cout << "The worst student is " << worstStudent(studentArray, numStudents) << std::endl;
			break;
		case 4: //option to call average function
			std::cout << "The average is " << average(studentArray, numStudents) << std::endl;
			break;
		case 5: //quit option and leaves loop
			std::cout << "Goodbye" << std::endl;
			quit = 1;
			break;
		default: //invalid option
			std::cout << "Invalid option." << std::endl;
			break;
		}
	}

	delete[] studentArray; //delete dynamically allocated memory

	return 0;
}

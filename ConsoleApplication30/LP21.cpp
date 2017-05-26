/*
Junhak Lee
ITP 165, Fall 2014
Lab Practical 21
junhak.lee@usc.edu
*/
#include "World.h"
#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string name; //create necessary variables
	string inhab;
	string anim;
	int numInhab;
	int numAnim;

	cout << "Enter name of your world: "; //prompt information about world
	std::getline(cin, name);
	cout << "Enter the name of inhabitants: ";
	std::getline(cin, inhab);
	cout << "Enter the name of the animals: ";
	std::getline(cin, anim);
	cout << "Enter the number of " << inhab << ": ";
	cin >> numInhab;
	cout << "Enter the number of " << anim << ": ";
	cin >> numAnim;

	World testWorld(name, inhab, anim, numInhab, numAnim); //create world

	return 0;
}
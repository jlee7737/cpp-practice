#include "World.h"
#include <iostream>
using std::cout;
using std::endl;

World::World(string name, string inhabitants, string animals, int inhabs, int anims) //constructor function
{
	mName = name; //assigns variables to world var
	mInhabitants = inhabitants;
	mAnimals = animals;
	mNumInhabitants = inhabs;
	mNumAnimals = anims;
	cout << "Building your world..." << endl;
	cout << "Your world has been created!" << endl;
};

World::~World() //destructor function
{
	cout << "You've destroyed " << mName << "and all " << mNumInhabitants << " " << mInhabitants << " and all of the " << mNumAnimals << " " << mAnimals << " are gone!" << endl;
};
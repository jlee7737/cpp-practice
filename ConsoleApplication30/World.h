#pragma once
#include <string>
 
using std::string;

class World
{
private:
	string mName; //variables to take params
	string mInhabitants;
	string mAnimals;
	int mNumInhabitants;
	int mNumAnimals;
public:
	//constructor
	World(string name, string inhabitants, string animals, int inhabs, int anims);
	//destructor
	~World();
};
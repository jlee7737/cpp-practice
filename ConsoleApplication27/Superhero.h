#pragma once
#include <string>

class Superhero
{
private:
	std::string mName;
	std::string mHomeTown;
	std::string mSuperPower;
	int mDamage;
	int mHealth;
	int mHitP;
	int mEvadeP;
public:
	std::string getName();
	std::string getHomeTown();
	std::string getSuperPower();
	int getDamage();
	int getHealth();
	int getHitP();
	int getEvadeP();

	void setName(std::string n);
	void setHomeTown(std::string h);
	void setSuperPower(std::string s);
	void setDamage(int d);
	void setHealth(int h);
	void setHitP(int h);
	void setEvadeP(int e);

	bool attack(Superhero& S);
};
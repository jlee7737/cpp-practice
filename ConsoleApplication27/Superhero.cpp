#include "Superhero.h"

std::string Superhero::getName()
{
	return mName;
}
std::string Superhero::getHomeTown()
{
	return mHomeTown;
}
std::string Superhero::getSuperPower()
{
	return mSuperPower;
}
int Superhero::getDamage()
{
	return mDamage;
}
int Superhero::getHealth()
{
	return mHealth;
}
int Superhero::getHitP()
{
	return mHitP;
}
int Superhero::getEvadeP()
{
	return mEvadeP;
}

void Superhero::setName(std::string n)
{
	mName = n;
}
void Superhero::setHomeTown(std::string h)
{
	mHomeTown = h;
}
void Superhero::setSuperPower(std::string s)
{
	mSuperPower = s;
}
void Superhero::setDamage(int d)
{
	if (d >= 0 && d <= 99)
	{
		mDamage = d;
	}
	else
	{
		mDamage = 10;
	}
}
void Superhero::setHealth(int h)
{
	if (h >= 0 && h <= 100)
	{
		mHealth = h;
	}
	else
	{
		mHealth = 0;
	}
}
void Superhero::setHitP(int h)
{
	if (h >= 0 && h <= 100)
	{
		mHitP = h;
	}
	else
	{
		mHitP = 25;
	}
}
void Superhero::setEvadeP(int e)
{
	if (e >= 0 && e <= 100)
	{
		mEvadeP = e;
	}
	else
	{
		mEvadeP = 25;
	}
}

bool Superhero::attack(Superhero& S)
{
	//Determine if you hit them: grab random #, if it's less than mHitP, then you hit
	bool hit = (std::rand() % 101 < mHitP);
	//Determine if they evade: grab random #, if it's less than S.mEvadeP, then they 
	bool evade = (std::rand() % 101 < S.mEvadeP);
	//If we hit and they did not evade: return true, else return false
	if (hit && !evade)
	{
		return true;
	}
	else
	{
		return false;
	}
}
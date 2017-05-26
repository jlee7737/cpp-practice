/*
John Junhak lee
ITP 165, Fall 2014
Lab Practical 19
junhak.lee@usc.edu
*/

#include "Superhero.h"
#include <ctime>
#include <iostream>

int main()
{
	std::srand(std::time(0));

	Superhero hero1;
	Superhero hero2;

	std::string s1, s2;
	int i1, i2;

	std::cout << "What is the name of your first superhero? ";
	std::getline(std::cin, s1);
	std::cout << "What is the name of your second superhero? ";
	std::getline(std::cin, s2);
	hero1.setName(s1);
	hero2.setName(s2);

	std::cout << "What is " << hero1.getName() << "'s hometown? ";
	std::getline(std::cin, s1);
	std::cout << "What is " << hero2.getName() << "'s hometown? ";
	std::getline(std::cin, s2);
	hero1.setHomeTown(s1);
	hero2.setHomeTown(s2);

	std::cout << "What is " << hero1.getName() << "'s superpower? ";
	std::getline(std::cin, s1);
	std::cout << "What is " << hero2.getName() << "'s superpower? ";
	std::getline(std::cin, s2);
	hero1.setSuperPower(s1);
	hero2.setSuperPower(s2);

	std::cout << "What is " << hero1.getName() << "'s damage? ";
	std::cin >> i1;
	std::cout << "What is " << hero2.getName() << "'s damage? ";
	std::cin >> i2;
	hero1.setDamage(i1);
	hero2.setDamage(i2);

	hero1.setHitP(std::rand() % (100 - hero1.getDamage()));
	hero2.setHitP(std::rand() % (100 - hero2.getDamage()));

	hero1.setEvadeP(std::rand() % (100 - hero1.getDamage()));
	hero2.setEvadeP(std::rand() % (100 - hero2.getDamage()));

	hero1.setHealth(100);
	hero2.setHealth(100);

	while ((hero1.getHealth() > 0) && (hero2.getHealth() > 0))
	{
		bool s1a = hero1.attack(hero2);
		bool s2a = hero2.attack(hero1);
		if (s1a)
		{
			std::cout << hero1.getName() << " successfully used " << hero1.getSuperPower() << " to attack " << hero2.getName() << std::endl;
			hero2.setHealth(hero2.getHealth() - hero1.getDamage());
		}
		else
		{
			std::cout << hero2.getName() << " successfully evaded " << hero1.getName() << "'s attack!" << std::endl;
		}
		if (s2a)
		{
			std::cout << hero2.getName() << " successfully used " << hero2.getSuperPower() << " to attack " << hero1.getName() << std::endl;
			hero2.setHealth(hero1.getHealth() - hero2.getDamage());
		}
		else
		{
			std::cout << hero1.getName() << " successfully evaded " << hero2.getName() << "'s attack!" << std::endl;
		}
	}

	if (hero1.getHealth() <= 0 && hero2.getHealth() > 0)
	{
		std::cout << hero2.getName() << " is victorious!" << std::endl;
		std::cout << hero1.getName() << " returns to " << hero1.getHomeTown() << " in defeat!" << std::endl;
	}
	else if (hero2.getHealth() <= 0 && hero1.getHealth() > 0)
	{
		std::cout << hero1.getName() << " is victorious!" << std::endl;
		std::cout << hero2.getName() << " returns to " << hero2.getHomeTown() << " in defeat!" << std::endl;
	}
	else
	{
		std::cout << "They're both dead!" << std::endl;
	}

	return 0;
}
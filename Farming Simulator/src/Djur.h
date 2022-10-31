#pragma once
#include "Farmer.h"

Farmer farmer;

class Sheep
{
public:
	int getKostnad()
	{
		return kostnad;
	}
	int getLegs()
	{
		return legs;
	}
	
	void buyAnimal(int amountOfAnimals)
	{
		int budget = farmer.getBudget();
		int sheepAmount = farmer.getSheepAmount();

		//om du har råd för får så får du ett till får och förlorar
		if(farmer.getBudget() > getKostnad()*amountOfAnimals)
		{
			budget = farmer.getBudget() - getKostnad();
			farmer.setBudget(budget);
			sheepAmount =+ 1 * amountOfAnimals;
			farmer.setSheepAmount(sheepAmount);
		}
		//if budget lower than kostnad then no, 
		//else newBudget=getBudget - kostnad 
	}

private:
	int kostnad = 100;
	int legs = 4;
};

class Pig : public Sheep
{
private:
	int	kostnad = 120;
};

class Cow : public Sheep
{
private:
	int	kostnad = 140;
};

class Chicken : public Sheep
{
private:
	int	kostnad = 80;
	int legs = 2;
};


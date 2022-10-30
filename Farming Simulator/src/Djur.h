#pragma once
#include "Farmer.h"

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
	int buyAnimal()
	{
		//if budget lower than kostnad then no, else newBudget=getBudget - kostnad 
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


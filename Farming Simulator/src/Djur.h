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
	
	virtual void buyAnimal(int amountOfAnimals)
	{
		int budget = farmer.getBudget();
		int sheepAmount = farmer.getSheepAmount();

		//om du har råd för får så får du antal får du betalade för och betalar summan för dem
		if(farmer.getBudget() > getKostnad()*amountOfAnimals)
		{
			budget = farmer.getBudget() - getKostnad()*amountOfAnimals;
			farmer.setBudget(budget);
			sheepAmount =+ 1 * amountOfAnimals;
			farmer.setSheepAmount(sheepAmount);

			std::cout << "You bought " << amountOfAnimals << " sheep and paid " << getKostnad()*amountOfAnimals << " kr\n";
		}
		else
		{
			std::cout << "You don't have enough money\n";
		}

	}

private:
	int kostnad = 100;
	int legs = 4;
};

class Pig : public Sheep
{
public:
	void buyAnimal(int amountOfAnimals) override
	{
		int budget = farmer.getBudget();
		int pigAmount = farmer.getPigAmount();

		//om du har råd för får så får du antal får du betalade för och betalar summan för dem
		if (farmer.getBudget() > getKostnad() * amountOfAnimals)
		{
			budget = farmer.getBudget() - getKostnad() * amountOfAnimals;
			farmer.setBudget(budget);
			pigAmount = +1 * amountOfAnimals;
			farmer.setPigAmount(pigAmount);

			std::cout << "You bought " << amountOfAnimals << " pig(s) and paid " << getKostnad() * amountOfAnimals << " kr\n";
		}
		else
		{
			std::cout << "You don't have enough money\n";
		}
	}

private:
	int	kostnad = 120;
};

class Cow : public Sheep
{
public:
	void buyAnimal(int amountOfAnimals) override
	{
		int budget = farmer.getBudget();
		int cowAmount = farmer.getCowAmount();

		//om du har råd för får så får du antal får du betalade för och betalar summan för dem
		if (farmer.getBudget() > getKostnad() * amountOfAnimals)
		{
			budget = farmer.getBudget() - getKostnad() * amountOfAnimals;
			farmer.setBudget(budget);
			cowAmount = +1 * amountOfAnimals;
			farmer.setCowAmount(cowAmount);

			std::cout << "You bought " << amountOfAnimals << " Cow(s) and paid " << getKostnad() * amountOfAnimals << " kr\n";
		}
		else
		{
			std::cout << "You don't have enough money\n";
		}

	}
private:
	int	kostnad = 140;
};

class Chicken : public Sheep
{
public:
	void buyAnimal(int amountOfAnimals) override
	{
		int budget = farmer.getBudget();
		int chickenAmount = farmer.getChickenAmount();

		//om du har råd för får så får du antal får du betalade för och betalar summan för dem
		if (farmer.getBudget() > getKostnad() * amountOfAnimals)
		{
			budget = farmer.getBudget() - getKostnad() * amountOfAnimals;
			farmer.setBudget(budget);
			chickenAmount = +1 * amountOfAnimals;
			farmer.setChickenAmount(chickenAmount);

			std::cout << "You bought " << amountOfAnimals << " chicken(s) and paid " << getKostnad() * amountOfAnimals << " kr\n";
		}
		else
		{
			std::cout << "You don't have enough money\n";
		}
	}

private:
	int	kostnad = 80;
	int legs = 2;
};


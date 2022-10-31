#include "FarmSimulator.h"
#include "Djur.h"

Sheep sheep;
Pig pig;
Cow cow;
Chicken chicken;

void FarmSimulator::Run()
{
	

	int input = 0;
	while (true)
	{
		std::cout << "FarmSimulator\n";
		std::cout << "1. Buy animal\n";
		std::cout << "2. Sell animal\n";
		std::cout << "3. Check inventory\n";
		std::cout << "4. Facts about animals\n";
		std::cin >> input;

		switch (input)
		{
		case 1:
			Buy();
			break;

		case 2:
			Sell();
			break;

		case 3:
			CheckInventory();
			break;

		case 4:
			Facts();
			break;
		}
	}
}

void FarmSimulator::Buy()
{
	int whichAnimal = 0;
	int amountOfAnimals = 0;
	std::cout << "Which animal would you like to buy?\n";
	std::cout << "1. Sheep\n";
	std::cout << "2. Pig\n";
	std::cout << "3. Cow\n";
	std::cout << "4. Chicken\n";
	std::cin >> whichAnimal;

	std::cout << "How many would you like to buy?\n";
	std::cin >> amountOfAnimals;

	switch (whichAnimal)
	{
	case 1:
		sheep.buyAnimal(amountOfAnimals);
		break;
	case 2:
		pig.buyAnimal(amountOfAnimals);
		break;
	case 3:
		cow.buyAnimal(amountOfAnimals);
		break;
	case 4:
		chicken.buyAnimal(amountOfAnimals);
		break;
	}
	
	

}
void FarmSimulator::Sell()
{

}
void FarmSimulator::CheckInventory()
{
	std::cout << "Your bankaccount in kr: " << farmer.getBudget() << "\n";
	std::cout << "Amount of Sheep: " << farmer.getSheepAmount() << "\n";
	std::cout << "Amount of Pigs: " << farmer.getPigAmount() << "\n";
	std::cout << "Amount of Cows: " << farmer.getCowAmount() << "\n";
	std::cout << "Amount of Chickens: " << farmer.getChickenAmount() << "\n";

}
void FarmSimulator::Facts()
{
	int input = 0;
	std::cout << "What do you want to learn about?\n";
	std::cout << "1. Pig\n";
	std::cout << "2. Chicken\n";
	std::cout << "3. Sheep\n";
	std::cout << "4. Cow\n";
	
	std::cin >> input;

	switch(input)
	{
	case 1:
		std::cout << "Cost of a pig in kr: " << pig.getKostnad() << "\n";
		std::cout << "Amount of legs on a pig: " << pig.getLegs() << "\n";
		break;

	case 2:
		std::cout << "Cost of a chicken in kr: " << chicken.getKostnad() << "\n";
		std::cout << "Amount of legs on a chicken: " << chicken.getLegs() << "\n";
		break;

	case 3:
		std::cout << "Cost of a sheep in kr: " << sheep.getKostnad() << "\n";
		std::cout << "Amount of legs on a sheep: " << sheep.getLegs() << "\n";
		break;

	case 4:		
		std::cout << "Cost of a cow in kr: " << cow.getKostnad() << "\n";
		std::cout << "Amount of legs on a cow: " << cow.getLegs() << "\n";
		break;

	}
}

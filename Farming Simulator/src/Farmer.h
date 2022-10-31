class Farmer
{
public:
	int getBudget()
	{
		return budget;
	}
	int getSheepAmount()
	{
		return sheepAmount;
	}
	int getPigAmount()
	{
		return pigAmount;
	}
	int getCowAmount()
	{
		return cowAmount;
	}
	int getChickenAmount()
	{
		return chickenAmount;
	}

	void setBudget(int newBudget)
	{
		budget = newBudget;
	}
	void setSheepAmount(int newSheepAmount)
	{
		sheepAmount = newSheepAmount;
	}
	void setPigAmount(int newPigAmount)
	{
		pigAmount = newPigAmount;
	}
	void setCowAmount(int newCowAmount)
	{
		cowAmount = newCowAmount;
	}
	void setChickenAmount(int newChickenAmount)
	{
		chickenAmount = newChickenAmount;
	}

private:
	int budget = 1000;
	int sheepAmount = 0;
	int pigAmount = 0;	
	int cowAmount = 0;
	int chickenAmount = 0;
};
class Farmer
{
public:
	int getBudget()
	{
		return budget;
	};
	int getSheepAmount()
	{
		return sheepAmount;
	};
	int getPigAmount()
	{
		return pigAmount;
	};
	int getCowAmount()
	{
		return cowAmount;
	};
	int getChickenAmount()
	{
		return chickenAmount;
	};

private:
	int budget = 1000;
	int sheepAmount = 0;
	int pigAmount = 0;	
	int cowAmount = 0;
	int chickenAmount = 0;
};
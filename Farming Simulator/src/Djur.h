#pragma once
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


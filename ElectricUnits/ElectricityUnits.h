#pragma once
class ElectricityUnits
{
public:
	ElectricityUnits(void);
	~ElectricityUnits(void);
	ElectricityUnits(int units);
	void setUnits(int units);
	float getTotalAmount();
	float getSurgeAmount();
	float getCalculatedAmount();
protected:
	float m_totalAmount;
	float m_surgeAmount;
	float m_calculatedAmount;
	int m_units;

private:
	void calculateAmount();
};


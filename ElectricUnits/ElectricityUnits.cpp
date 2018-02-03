#include "ElectricityUnits.h"


ElectricityUnits::ElectricityUnits(void):m_totalAmount(0.0f)
										,m_surgeAmount(0.0f)
										, m_calculatedAmount(0.0f)
										,m_units(0)
{
}

ElectricityUnits::ElectricityUnits(int units):m_totalAmount(0.0f)
										,m_surgeAmount(0.0f)
										, m_calculatedAmount(0.0f)
										,m_units(units)
{
	calculateAmount();
}

ElectricityUnits::~ElectricityUnits(void)
{
}

void ElectricityUnits::setUnits(int units)
{
	this->m_units = units;
	calculateAmount();
}

void ElectricityUnits::calculateAmount()
{
	int remainingUnits(this->m_units);
	do
	{
		int units(0);
		if(remainingUnits >= 600)
		{
			units = remainingUnits - 599;
			m_calculatedAmount += units * 2.0f;
		}
		else if((remainingUnits >= 400) && (remainingUnits < 600))
		{
			units = remainingUnits - 399;
			m_calculatedAmount += units * 1.8f;
		}
		else if((remainingUnits >= 200) && (remainingUnits < 400))
		{
			units = remainingUnits - 199;
			m_calculatedAmount += units * 1.5f;
		}
		else
		{
			units = remainingUnits;
			m_calculatedAmount += units * 1.2f;
		}
		remainingUnits -= units;
	}while (remainingUnits);

	if(m_calculatedAmount < 100.0f)
		m_calculatedAmount = 100.0f;
	else if(m_calculatedAmount > 400.0f)
		m_surgeAmount = (0.15f * m_calculatedAmount);
	m_totalAmount = m_calculatedAmount + m_surgeAmount;
}

float ElectricityUnits::getTotalAmount()
{
	return this->m_totalAmount;
}

float ElectricityUnits::getSurgeAmount()
{
	return this->m_surgeAmount;
}

float ElectricityUnits::getCalculatedAmount()
{
	return this->m_calculatedAmount;
}

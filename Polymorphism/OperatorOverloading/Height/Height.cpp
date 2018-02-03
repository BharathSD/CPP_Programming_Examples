#include "Height.h"


Height::Height(void):m_feetToInches(12)
{
}


Height::~Height(void)
{
}

Height::Height(int feet, int inches)
	:m_feet(feet), m_inches(inches),m_feetToInches(12)
{
}

void Height::setHeight(int feet, int inches)
{
	m_feet = feet;
	m_inches = inches;
}

void Height::printHeight()
{
	std::cout << m_feet << " feet " << m_inches << " inches" << std::endl;
}

Height Height::add(Height h)
{
	Height H;
	H.m_inches = this->m_inches + h.m_inches;
	H.m_feet = this->m_feet + h.m_feet;

	if(H.m_inches >= m_feetToInches)
	{
		H.m_inches -= m_feetToInches;
		H.m_feet +=1;
	}
	return H;
}

Height Height::sub(Height h)
{
	int val1 = (m_feet * m_feetToInches) + m_inches;
	int val2 = (h.m_feet * m_feetToInches) + h.m_inches;
	Height H;
	H.m_feet = (abs(val1 - val2)) / m_feetToInches;
	H.m_inches = (abs(val1 - val2)) % m_feetToInches;
	return H;
}

Height Height::operator+(Height h)
{
	return add(h);
}

Height Height::operator-(Height h)
{
	return sub(h);
}

bool Height::operator>=(Height h)
{
	int val1 = (m_feet * m_feetToInches) + m_inches;
	int val2 = (h.m_feet * m_feetToInches) + h.m_inches;
	return (val1 >= val2);
}

bool Height::operator<=(Height h)
{
	int val1 = (m_feet * m_feetToInches) + m_inches;
	int val2 = (h.m_feet * m_feetToInches) + h.m_inches;
	return (val1 <= val2);
}

bool Height::operator==(Height h)
{
	int val1 = (m_feet * m_feetToInches) + m_inches;
	int val2 = (h.m_feet * m_feetToInches) + h.m_inches;
	return (val1 == val2);
}

bool Height::operator>(Height h)
{
	int val1 = (m_feet * m_feetToInches) + m_inches;
	int val2 = (h.m_feet * m_feetToInches) + h.m_inches;
	return (val1 > val2);
}

bool Height::operator<(Height h)
{
	int val1 = (m_feet * m_feetToInches) + m_inches;
	int val2 = (h.m_feet * m_feetToInches) + h.m_inches;
	return (val1 < val2);
}

Height Height::operator++(void)
{
	++this->m_inches;
	if(this->m_inches >= m_feetToInches)
	{
		this->m_feet++;
		this->m_inches -= m_feetToInches;
	}
	return *this;
}

Height Height::operator++(int)
{
	const Height oldHeight(*this);
	this->m_inches++;
	if(this->m_inches >= m_feetToInches)
	{
		this->m_feet++;
		this->m_inches -= m_feetToInches;
	}
	return oldHeight;
}

Height Height::operator--(void)
{
	--this->m_inches;
	if(this->m_inches < 0)
	{
		this->m_feet--;
		this->m_inches +=m_feetToInches;
	}
	return *this;
}

Height Height::operator--(int)
{
	const Height oldHeight(*this);
	--this->m_inches;
	if(this->m_inches < 0)
	{
		this->m_feet--;
		this->m_inches +=m_feetToInches;
	}
	return oldHeight;
}
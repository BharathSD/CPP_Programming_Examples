#pragma once
#include <iostream>
#include <math.h>

class Height
{
public:
	Height(void);
	~Height(void);
	Height(int feet, int inches);
	void setHeight(int feet, int inches);
	void printHeight();
	Height add(Height h);
	Height sub(Height h);

	Height operator+(Height h);
	Height operator-(Height h);
	bool operator>=(Height h);
	bool operator<=(Height h);
	bool operator==(Height h);
	bool operator>(Height h);
	bool operator<(Height h);
	Height operator++(void);
	Height operator--(void);



	Height operator++(int);
	
	Height operator--(int);

private:
	int m_feet;
	int m_inches;
	const int m_feetToInches;
};


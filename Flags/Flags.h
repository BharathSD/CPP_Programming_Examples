#ifndef KernelFlags_H
#define KernelFlags_H
#include <iostream>

class flag
{
protected :
	char m_Flag;

public:

	flag();

	~flag();

	void setFlag(unsigned int flagBit);

	bool checkFlag(unsigned int flagBit);

	void resetFlag(unsigned int flagBit);

	void toggleFlag(unsigned int flagBit);

	void displayFlag();
};

#endif
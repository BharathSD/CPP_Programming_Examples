#include "Flags.h"
using namespace std;
flag::flag()
:m_Flag(0)
{
}

flag::~flag()
{
}

void flag::setFlag(unsigned int flagBit)
{
	this->m_Flag |= 1 << flagBit;
}

bool flag::checkFlag(unsigned int flagBit)
{
	return (bool)((this->m_Flag >> flagBit) & 1);
}

void flag::resetFlag(unsigned int flagBit)
{
	this->m_Flag &= ~(1 << flagBit);
}

void flag::toggleFlag(unsigned int flagBit)
{
	this->m_Flag ^= 1 << flagBit;

}
void flag::displayFlag()
{
	int noOfBits(sizeof(m_Flag) * 8);
	for(int itr(noOfBits-1); itr >=0; --itr)
	{
		cout << ((this->m_Flag >> itr) & 1) << "|";
	}
	cout << endl;
}
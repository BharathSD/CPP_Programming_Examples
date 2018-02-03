#include "Research.h"
using namespace std;

Research::Research(std::string fieldOfResearch)
	:m_fieldOfResearch(fieldOfResearch)
{
}


Research::~Research(void)
{
}

void Research::getDetails()
{
	cout << "Field Of Research : " << m_fieldOfResearch << endl;
}

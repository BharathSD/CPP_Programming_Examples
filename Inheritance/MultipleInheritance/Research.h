#pragma once
#include <iostream>
#include <string>

class Research
{
protected:
	std::string m_fieldOfResearch;
public:
	Research(std::string fieldOfResearch);
	~Research(void);
	void getDetails();
};


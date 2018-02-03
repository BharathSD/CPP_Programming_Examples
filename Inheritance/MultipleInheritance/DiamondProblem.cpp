#include <iostream>
using namespace std;

class Base 
{

protected:

	int bData;
public:

	Base() : bData(10)
	{

	}

};



class Derived1 : virtual public Base 
{
protected:
	int d1Data;
public:
	Derived1():d1Data(20)
	{
	}
};



class Derived2 : virtual public Base 
{
protected:
	int d2Data;
public:
	Derived2():d2Data(30)
	{
	}
};



class Derived3 : public Derived1, public Derived2 
{

public:

	int GetData() 
	{

		return d1Data + d2Data + bData;
	}

};



void main ()

{

	Derived3 obj;

	cout << obj.GetData() << endl;

}
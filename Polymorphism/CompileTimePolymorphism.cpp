#include <iostream>
using namespace std;

class AdditionClass
{
public:

	int add(int x, int y)
	{
		return x+y;
	}

	float add(float x, float y)
	{
		return x+y;
	}

	double add(double x, double y)
	{
		return x+y;
	}
};

class MyClass
{
public:
	void func(int x)
	{
		cout << " The function is in int type, value of x : " << x << endl;
	}

	void func(float x)
	{
		cout << " The function is in float type, value of x : " << x << endl;
	}

	void func(double x)
	{
		cout << " The function is in double type, value of x : " << x << endl;
	}
};
int main()
{
	AdditionClass ob;
	cout << ob.add(1,2) << endl;
	cout << ob.add(1.0, 2.0) << endl;
	return EXIT_SUCCESS;
}
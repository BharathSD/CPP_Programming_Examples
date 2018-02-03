#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base class constructor" << endl;
	}

	~Base()
	{
		cout << "Base class destructor" << endl;
	}
};

class Base1
{
public:
	Base1()
	{
		cout << "Base1 class constructor" << endl;
	}

	~Base1()
	{
		cout << "Base1 class destructor" << endl;
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		cout << "Derived class constructor" << endl;
	}

	~Derived()
	{
		cout << "Derived class destructor" << endl;
	}
};

class Derived1 : public Derived
{
public:
	Derived1()
	{
		cout << "Derived1 class constructor" << endl;
	}

	~Derived1()
	{
		cout << "Derived1 class destructor" << endl;
	}
};

class Derived2 : public Base, public Base1
{
public:
	Derived2()
	{
		cout << "Derived2 class constructor" << endl;
	}

	~Derived2()
	{
		cout << "Derived1 class destructor" << endl;
	}
};

int main()
{
	Derived2 ob;
	return EXIT_SUCCESS;
}
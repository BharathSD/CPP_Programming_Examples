#pragma once
#include <iostream>

class Complex
{
private:
	float real, imag;
public:
	Complex(float r = 0, float i =0);
	~Complex(void);

	Complex operator + (Complex const &obj) ;
	Complex operator - (Complex const &obj) ;
	Complex operator += (Complex const &obj) ;
	Complex operator -= (Complex const &obj) ;
	bool operator == (Complex const &obj) ;
	void print();
};

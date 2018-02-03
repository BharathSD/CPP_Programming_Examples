#include "Complex.h"
using namespace std;

Complex::Complex(float r , float i ):real(r), imag(i)
{
}

Complex::~Complex(void)
{
}

Complex Complex::operator + (Complex const &obj) 
{
	Complex res;
	res.real = real + obj.real;
	res.imag = imag + obj.imag;
	return res;
}

Complex Complex::operator - (Complex const &obj) 
{
	Complex res;
	res.real = real - obj.real;
	res.imag = imag - obj.imag;
	return res;

}

Complex Complex::operator += (Complex const &obj) 
{
	this->real += obj.real;
	this->imag += obj.imag;
	return *this;
}

Complex Complex::operator -= (Complex const &obj) 
{
	this->real -= obj.real;
	this->imag -= obj.imag;
	return *this;

}

bool Complex::operator == (Complex const &obj)
{
	return ((this->real == obj.real) && (this->imag == obj.imag));
}
void Complex::print() 
{ 
	cout << real << " + i" << imag << endl; 
}
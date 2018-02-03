#include<iostream>
using namespace std;
  
#include "Complex.h"
  
int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    c3.print();

	Complex c4 = c1 - c2; // An example call to "operator+"
    c4.print();
	bool isEqual = (c3 == c4);
	cout << isEqual << endl;
	return EXIT_SUCCESS;
}
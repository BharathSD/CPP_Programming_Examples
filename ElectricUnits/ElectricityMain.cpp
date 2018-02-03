#include <iostream>
#include "ElectricityUnits.h"
using namespace std;

int main()
{
	ElectricityUnits ob;
	ob.setUnits(200);
	cout << "Calculated Amount : " << ob.getCalculatedAmount() << endl;
	cout << "Surcharge Amount : " << ob.getSurgeAmount()<< endl;
	cout << "Total Amount : " << ob.getTotalAmount() << endl;

	ElectricityUnits *p = new ElectricityUnits(400);
	cout << "Calculated Amount : " << p->getCalculatedAmount() << endl;
	cout << "Surcharge Amount : " << p->getSurgeAmount()<< endl;
	cout << "Total Amount : " << p->getTotalAmount() << endl;
	return EXIT_SUCCESS;
}
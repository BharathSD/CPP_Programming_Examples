#include <iostream>
#include "Height.h"

using namespace std;

int main()
{
	Height h1(4,7);
	h1.printHeight();

	Height h2 = h1++;
	cout << (h1 == h2) << endl;
	h2.printHeight();
	h1.printHeight();
	return EXIT_SUCCESS;
}
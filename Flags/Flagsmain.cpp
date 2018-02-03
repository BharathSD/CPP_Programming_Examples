/*
	This file is only for creating objects of the necessary class
*/

#pragma region Flags
#include <iostream>
#include "Flags.h"
using namespace std;

int main()
{
	flag flagOb;
	flagOb.displayFlag();
	flagOb.setFlag(1);
	flagOb.displayFlag();
	flagOb.toggleFlag(3);
	flagOb.displayFlag();
	return EXIT_SUCCESS;
}
#pragma endregion
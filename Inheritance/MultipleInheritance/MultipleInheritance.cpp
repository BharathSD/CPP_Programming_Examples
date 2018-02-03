#include "Scientist.h"

int main()
{
	Scientist *scntst = new Scientist("Shiva", 25000, "DSP", "MS");
	scntst->getDetails();
	delete scntst;
	return EXIT_SUCCESS;
}
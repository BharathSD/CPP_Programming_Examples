#include "stack.h"


int main()
{
	stack *ob = new stack();
	ob->push(10);
	ob->push(23);
	ob->push(90);
	cout << *ob << endl;
	delete ob;
	return EXIT_SUCCESS;
}
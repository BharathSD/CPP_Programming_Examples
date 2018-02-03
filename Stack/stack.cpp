#include "stack.h"


stack::stack(void):sp(-1)
{
}


stack::~stack(void)
{
}

void stack::push(int i)
{
	items[++sp] = i;
}

int stack::pop()
{
	return items[sp--];
}

int stack::Top() const
{
	return items[sp];
}

ostream& operator<<(ostream &stream, stack &s)
{
	stream << "Stack : " << endl;
	for(int i(0); i<= s.sp; ++i)
		cout << s.items[i] << endl;
	return stream;
}
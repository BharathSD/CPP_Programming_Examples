#pragma once
#include <iostream>
using namespace std;
const int STACKSIZE = 10;
class stack
{
private:
	int items[STACKSIZE];
	int sp;
public:
	stack(void);
	~stack(void);
	void push(int i);
	int pop();
	int Top() const;

	friend ostream& operator<<(ostream &stream, stack &s);
	/*{
		stream << "Stack : " << endl;
		for(int i(0); i< s.sp; ++i)
			cout << s.items[i] << endl;
		return stream;
	}*/
};


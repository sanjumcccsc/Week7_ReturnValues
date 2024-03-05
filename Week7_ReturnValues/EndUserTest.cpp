#include "ReturnValuesExamples.h"
#include <iostream>
using namespace std;

int main()
{
	char c = 'n';
	char c1, c3;
	char* c2;
	ReturnValuesExamples r;

	c1 = r.foo1(c);
	cout << "Using foo1: " << c << " converted to " << c1 << endl;

	c1 = r.foo2(c);
	cout << "Using foo2: " << c << " converted to " << c1 << endl;

	c2 = r.foo3(c);
	c3 = *c2;
	cout << "Using foo3: " << c << " converted to " << c3 << endl;
	return 0;
}
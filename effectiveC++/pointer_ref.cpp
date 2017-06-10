/*
 *
 * Source code to check differenece and usage of pointer and referenc in c++
 *
 */

#include <iostream>

using namespace std;

int main()

{	int c = 0;
	int *a = &c;
	int &b = c;
	cout << "Value of b "<<b<<endl;
	int m = 110;
	b= m;
	cout << "Value of b "<<b<<endl;
	cout << "Value of c "<<c<<endl;
	a = &m;
	*a = 120	;
	cout << "Value of c "<<c<<endl;
}

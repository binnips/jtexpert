#include <iostream>

using namespace std;

void bar()
{
	cout<<"I am bar"<<endl;
}
void foo()
{
	cout <<"I am foo"<<endl;
	std::atexit(bar);
}

int main()
{
	std::atexit(foo);
};

#include <iostream>
#include <string>
using namespace std;


class stError
{
	private :
		int errCode;
		string error;
	public:
		stError():errCode(0),error("No Error") { cout <<"Default constructor"<<endl;}
		stError(int a, string r):errCode(a),error(r) { cout <<"FULL	 constructor"<<endl;}
		stError(const stError &r)
		{
			cout <<"Copy constructor "<<endl;
			errCode = r.errCode;
			error = r.error;
		}
		stError& operator = (const stError &r)
		{
			cout <<"Assignment constructor "<<endl;
			errCode = r.errCode;
		}
		void print()
		{
			cout<<error<<endl;
		}
		~ stError()
		{
			cout<<"My destructor"<<endl;
		}
};

void myData(int i)
{
	static int x=i;
	x += 1;
	throw &x;
}

void yourData()
{

	for (int i= 0;i<10;i++)
		try
	{
		myData(i);
	}
	catch(void *a)
	{
		int *m = (int *)a;
		cout <<"HAHAHA "<<*m<<endl;
	}
}
void func()
{
	stError r(1,"SOme error");
	throw r;
	cout<<"ANything print here "<<endl;
}
int main()
{
	yourData();

	try
	{
		func();
	}
	catch(stError &m)
	{
		cout<<"Some exception happened"<<endl;
		m.print();
	}
	return 0;
}

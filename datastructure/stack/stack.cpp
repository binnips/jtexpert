#include <iostream>

using namespace std;
#define MAX 10

class myStack
{

	private:
		int top;
	public:
		int a[MAX];
		myStack():top(0){}
		~myStack() {}
		void push(int d)
		{
			if(top < MAX)
			{
				a[top++] = d;
			}
			else
				cout <<"Stack overflow"<<endl;
		}
		int pop()
		{
			int ret = -1;
			if(!top)
				cout <<"Stack Empty"<<endl;
			else
				ret = a[--top];
			return ret;
		}

};

int main()
{

	myStack a;
	int  i = 0;
	for(i=0;i<11;i++)
		a.push((i+1)*10);
	for(i=0;i<13;i++)
		cout <<a.pop()<<endl;
	return 0;
}

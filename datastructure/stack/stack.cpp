#include <iostream>
#include <string.h>

using namespace std;
#define MAX 10
template <typename T>
class myStack
{

	private:
		int top;
	public:
		T a[MAX];
		myStack():top(0){}
		~myStack() {}
		void push(T d)
		{
			if(top < MAX)
			{
				a[top++] = d;
			}
			else
				cout <<"Stack overflow"<<endl;
		}
		T pop()
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

	myStack<int> a;
	int  i = 0;
	for(i=0;i<11;i++)
		a.push((i+1)*10);
	for(i=0;i<13;i++)
		cout <<a.pop()<<endl;

	cout <<"Enter a string"<<endl;
	char b[10] ="Hello";
	myStack<char>c;
	for(i=0;i<strlen(b);i++)
		c.push(b[i]);
	for(i=0;i<strlen(b);i++)
		cout<<c.pop();
	cout<<endl;

	return 0;
}

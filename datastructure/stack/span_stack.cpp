#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;


void calculateSpan(int *a, int n)
{
	int i = 0;
	stack<int> st;
	int s[n];
	st.push(0);
	s[0] = 1;
	for(i=1;i<n;i++)
	{
		while(!st.empty()&& (a[i] >= a[st.top()]))
			st.pop();
		s[i] = st.empty()?(i+1):(i-st.top());
		st.push(i);
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ",s[i]);
	printf("\n");
}

int main()
{
	int a[ ] = {3,6,18,5,11,34,23,20,123,45,180};
	calculateSpan(a,sizeof(a)/sizeof(int));
	return 0;
}

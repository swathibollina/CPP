#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Given a number, print its digits in reverse order using a stack.
	int n=5678;
	stack<int> s;
	while(n!=0)
	{
	    s.push(n%10);
	    n/=10;
	}
	int i=1,rev=0;
	while(!s.empty())
	{
	    rev=rev+(s.top()*i);
	    s.pop();
	    i*=10;
	}
	cout<<rev;
}

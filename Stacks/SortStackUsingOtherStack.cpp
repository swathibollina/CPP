#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Given a stack, sort it in ascending order (use a second stack).
	stack<int> s1,s2;
	s1.push(1);
	s1.push(2);
	s1.push(90);
	s1.push(0);
	s1.push(78);
	while(!s1.empty())
	{
	    int n=s1.top();
	    s1.pop();
	    while(!s2.empty() && s2.top()<n)
	    {
	        s1.push(s2.top());
	        s2.pop();
	    }
	    s2.push(n);
	}
	while(!s2.empty())
	{
	    cout<<s2.top()<<endl;
	    s2.pop();
	}
}

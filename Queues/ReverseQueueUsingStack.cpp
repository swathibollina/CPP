#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Reverse a queue using a stack.
	queue<int> q;
	q.push(11);
	q.push(3);
	q.push(50);
	q.push(18);
	q.push(13);
	stack<int> s;
	while(!q.empty())
	{
	    s.push(q.front());
	    q.pop();
	}
	while(!s.empty())
	{
	    cout<<s.top()<<endl;
	    s.pop();
	}
}

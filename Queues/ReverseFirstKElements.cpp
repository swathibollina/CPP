#include <bits/stdc++.h>
using namespace std;

int main() {
	// Given a queue, reverse only the first K elements (keep the rest in original order).
	// 1 6 7 5 9 23
	queue<int> q;
	int k=3;
	stack<int> s;
	q.push(1);
	q.push(6);
	q.push(7);
	q.push(5);
	q.push(9);
	q.push(23);
	while(k--)
	{
	    s.push(q.front());
	    q.pop();
	}
	while(!s.empty())
	{
	    cout<<s.top()<<endl;
	    s.pop();
	}
	while(!q.empty())
	{
	    cout<<q.front()<<endl;
	    q.pop();
	}
}

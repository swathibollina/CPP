#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Given a queue of integers, print only the even numbers in order.
	queue<int> q;
	q.push(11);
	q.push(3);
	q.push(50);
	q.push(18);
	q.push(13);
	q.push(12);
	while(!q.empty())
	{
	    int t=q.front();
	    if(t%2==0)
	    cout<<t<<endl;
	    q.pop();
	}
}

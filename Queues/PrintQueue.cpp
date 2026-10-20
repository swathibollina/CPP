#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Insert 5 elements into a queue and print them in the order they were inserted.
	queue<int> q;
	q.push(11);
	q.push(3);
	q.push(50);
	q.push(18);
	q.push(13);
	while(!q.empty())
	{
	    cout<<q.front()<<endl;
	    q.pop();
	}
}v

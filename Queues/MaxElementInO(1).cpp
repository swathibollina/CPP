#include <bits/stdc++.h>
using namespace std;

int main() {
	// Find the maximum element in a queue in O(1).
	stack<int> q1,q2;
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
	    cin>>v[i];
	}
	q1.push(v[0]);
	q2.push(v[0]);
	for(int i=1;i<n;i++)
	{
	    q1.push(v[i]);
	    q2.push(max(q2.top(),v[i]));
	}
	cout<<q2.top();
}

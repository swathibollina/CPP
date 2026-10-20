#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Find the intersection of two arrays using sets.
	int n1,n2;
	int a[]={1,2,5,6,5,3,4,2,5,6};
	int b[]={1,5,94,67,89,6};
	n1=size(a);
	n2=size(b);
	set<int> s;
	for(int i=0;i<n1;i++)
	{
	    s.insert(a[i]);
	}
	for(int i=0;i<n2;i++)
	{
	    if(s.find(b[i])!=s.end())
    	    cout<<b[i]<<endl;
	}
}

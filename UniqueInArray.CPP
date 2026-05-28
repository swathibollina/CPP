#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Given an array with duplicates, print all unique elements.
	int n;
	int a[]={1,2,5,6,5,3,4,2,5,6};
	n=size(a);
	set<int> s;
	for(int i=0;i<n;i++)
	{
	    s.insert(a[i]);
	}
	for(auto it=s.begin();it!=s.end();it++)
	{
	    cout<<*it<<endl;
	}
}

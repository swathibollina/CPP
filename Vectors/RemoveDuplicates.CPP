#include <bits/stdc++.h>
using namespace std;

int main() 
{
	//  Remove all duplicates from a vector.
	vector<int> v={1,2,3,4,5,5,3,3,3};
	vector<int> v1;
	set<int> s;
	for(int i=0;i<v.size();i++)
	{
	    s.insert(v[i]);
	}
	for(auto it=s.begin();it!=s.end();it++)
	{
	    v1.push_back(*it);
	}
	for(int i=0;i<v1.size();i++)
	{
	    cout<<v1[i]<<" ";
	}
}

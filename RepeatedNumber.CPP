#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Given a vector of integers, find the element that appears most often
	vector<int> v={11,3,3,2,3,4,6,7,4};
	map<int,int> m;
	for(int i=0;i<v.size();i++)
	{
	    m[v[i]]++;
	}
	int c=0;
	for(auto i:m)
	{
	    if(i.second>c)
	        c=i.first;
	}
	cout<<c<<endl;
}

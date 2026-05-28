#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Rotate a vector by K positions to the right.
	vector<int> v={1,2,3,4,5};
	vector<int> v1;
	int k=12;
	k=k%v.size();
	for(int i=k+1;i<v.size();i++)
	{
	    v1.push_back(v[i]);
	}
	for(int i=0;i<k+1;i++)
	{
	    v1.push_back(v[i]);
	}
	for(int i=0;i<v1.size();i++)
	{
	    cout<<v1[i]<<" ";
	}
}

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Rotate a vector by K positions to the right.
	vector<int> v={1,2,3,4,5};
	vector<int> v1;
	int k=10,n=v.size();
	k=k%n;
	if(k==0)
	{
	    for(int i=0;i<n;i++)
	    {
	        cout<<v[i]<<" ";
	    }
	}
	else
	{
	    for(int i=k+1;i<n;i++)
	   {
	        v1.push_back(v[i]);
	    }
	    for(int i=0;i<k+1;i++)
	    {
	        v1.push_back(v[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<v1[i]<<" ";
	    }   
	}
}

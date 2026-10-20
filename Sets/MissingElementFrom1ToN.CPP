#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Given a list of numbers, find the missing number from 1 to N
	int a[6]={2,3,4,6,7,1};
	set<int> s;
	for(int i=0;i<6;i++)
	{
	    s.insert(a[i]);
	}
	int missing=1;
	for(auto it=s.begin();it!=s.end();it++)
	{
	    int current=*it;
	    if(missing==current)
	    {
	        missing++;
	        continue;
	    }
	    else
	    {
	        cout<<missing;
	        break;
	    }
	}
}

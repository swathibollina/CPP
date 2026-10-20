#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Given a vector of integers, find the element that appears most often
	vector<int> v={11,3,3,2,2,2,3,4,6,7,4};
	map<int,int> m;
	for(int i=0;i<v.size();i++)
	{
	    m[v[i]]++;
	}
	int current_max=0,max_freq=0;
	for(auto i:m)
	{
	    if(i.second>max_freq)
	    {
	        max_freq=i.second;
	        current_max=i.first;
	    }
	}
	cout<<current_max<<endl;
}

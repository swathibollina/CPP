#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Find the sum and average of all elements
	vector<int> v={1,2,3,4,5};
	int s=0,avg=0;
	for(int i=0;i<v.size();i++)
	{
	    s+=v[i];
	}
	avg=s/v.size();
	cout<<s<<" "<<avg;
}

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Find the maximum and minimum element in a vector.
	vector<int> v={103,9,1,45,90};
	int max=v[0],min=v[0];
	for(int i=0;i<v.size();i++)
	{
	    if(v[i]>max)
	        max=v[i];
	    if(v[i]<min)
	        min=v[i];
	}
	cout<<min<<" "<<max;
}

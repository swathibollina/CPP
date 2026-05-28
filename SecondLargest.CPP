#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Find the second largest element in a vector.
	vector<int> v={1,2,3,4,5,5,3,3,3};
	vector<int> v1;
	int max=0,s_max=0;
	for(int i=0;i<v.size();i++)
	{
	    if(v[i]>max)
	    max=v[i];
	}
	for(int i=0;i<v.size();i++)
	{
	    if(v[i]>s_max && v[i]!=max)
	    s_max=v[i];
	}
    cout<<max<<" "<<s_max;
}

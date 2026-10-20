#include <bits/stdc++.h>
using namespace std;

bool sorted(vector<int> v)
{
    for(int i=1;i<v.size();i++)
    {
        if(v[i-1]>v[i])
        return false;
    }
    return true;
}

int main() 
{
	// Check if a vector is sorted in ascending order
	vector<int> v={1,2,6,3,4,5};
    (sorted(v)) ? cout<<"Sorted" : cout<<"Not sorted";
}

#include <bits/stdc++.h>
using namespace std;


int main() 
{
	// Find the first non-repeating character in a string.
	string s="pavan";
	map<char,int> m;
	for(int i=0;i<s.length();i++)
	{
	    m[s[i]]++;
	}
	for(int i=0;i<s.length();i++)
	{
	    if(m[s[i]]==1)
	    {
	        cout<<s[i]<<" ";
	        break;
	    }
	}
}

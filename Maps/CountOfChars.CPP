#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Count the frequency of each character in a string.
	string s="apple";
	map<char,int> m;
	for(int i=0;i<s.length();i++)
	{
	    if(m.find(s[i])==m.end())
	        m.insert({s[i],1});
	   else
	        m[s[i]]++;
	}
	for(auto i:m)
	{
	    cout<<i.first<<" "<<i.second<<endl;
	}
}

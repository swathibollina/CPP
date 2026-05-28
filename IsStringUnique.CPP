#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Given a string, check if it has all unique characters.
	string str="India";
	for(int i=0;i<str.length();i++)
	{
	    if(str[i]>='A' && str[i]<='Z')
	        str[i]=str[i]+32;
	}
	set<char> s;
	for(int i=0;i<str.length();i++)
	{
	    s.insert(str[i]);
	}
	if(str.length()==s.size())
	    cout<<"All unique characters";
	else
	    cout<<"Not Unique";
}

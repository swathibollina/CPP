#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Count the frequency of each word in a sentence.
	string s="India India";
	map<string,int> m;
	string word="";
	for(int i=0;i<s.length();i++)
	{
	    if(s[i]==" ")
	    {
	        if(m.find(word)==m.end())
	        {
	            m.insert({word,1});
	            word="";
	        }
	        else
	        {
	            m[word]++;
	            word="";
	        }
	    }
	    else
	    {
	        word+=s[i];
	    }
	}
	for(auto i:m)
	{
	    cout<<i.first<<" "<<i.second;
	}
}

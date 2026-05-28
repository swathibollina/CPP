#include <bits/stdc++.h>
using namespace std;

int countVowels(string s)
{
    int c=0;
    for(int i=0;i<=s.length();i++)
    {
        s[i]=toupper(s[i]);
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        c++;
    }
    return c;
}

int main() 
{
	// Write a function countVowels(string s) to count vowels in a string.
	string s="Swathi";
	cout<<countVowels(s);
}

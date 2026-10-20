#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    stack<char> s;
    int n=str.length();
    for(int i=0;i<n;i++)
    s.push(str[i]);
    for(int i=0;i<n;i++)
    {
        if(str[i]!=s.top())
        return false;
        s.pop();
    }
    
    return true;
}

int main() 
{
	// Check if a given string is a palindrome using a stack.
    string str="abaaba";
    isPalindrome(str)? cout<<"palindrome" : cout<<"Not a palindrome";
}

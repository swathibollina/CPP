#include <bits/stdc++.h>
using namespace std;


bool isBalanced(string str)
{
    stack<char> s;
    for(char c:str)
    {
        if(c=='(' || c=='{' || c=='[')
            s.push(c);
        else if(c=='}' || c==']' || c==')')
        {
            if(s.empty())
                return false;
            char top=s.top();
            if((c==')' && top!='(') || (c=='}' && top!='{') || (c==']' && top!='['))
                return false;
            s.pop();
        }
        
    }
    return s.empty();
}

int main() 
{
	// Check if a given string of brackets is balanced (e.g., "({[]})" → valid, "({[})" → invalid).
	string str="({[]})";
	bool b=isBalanced(str);
	if(b)
	cout<<"Balanced";
	else
	cout<<"Not Balanced";
}

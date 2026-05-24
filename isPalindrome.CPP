#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    int t=n,rem=0,rev=0;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(rev==t)
    return true;
    return false;
}

int main()
{
    // Write a function isPalindrome(int n) that returns true if a number reads the same forwards and backwards.
    int n=1331;
    bool b=isPalindrome(n);
    if(b)
    cout<<n<<" IS A PALINDROME";
    else
    cout<<n<<" IS NOT A PALINDROME";
}

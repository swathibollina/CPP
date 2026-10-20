#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int gcd=0;
    for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        gcd=i;
    }
    return gcd;
}

int main()
{
    // Write a function gcd(int a, int b) to find the greatest common divisor.
    int a=81,b=153;
    cout<<gcd(a,b);
    
}

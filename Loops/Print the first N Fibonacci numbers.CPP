#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Print the first N Fibonacci numbers.
    int n=10;
    int a=0,b=1,c=0;
    cout<<a<<" "<<b<<" ";
    while(n-2!=0)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        n--;
    }
    
}

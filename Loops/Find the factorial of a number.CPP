#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Find the factorial of a number
    int n=5,f=1;
    while(n!=0)
    {
        f=f*n;
        n--;
    }
    cout<<f;
}

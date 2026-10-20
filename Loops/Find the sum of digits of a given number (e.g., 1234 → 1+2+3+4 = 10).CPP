#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Find the sum of digits of a given number (e.g., 1234 → 1+2+3+4 = 10)
    int n=1098;
    int rem=0,sum=0;
    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    cout<<sum;
}

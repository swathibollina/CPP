#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Reverse a number (e.g., 1234 → 4321)
    int n=1205,rem=0,rev=0;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    cout<<rev;
    
}

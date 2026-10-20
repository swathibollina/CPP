#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Check if a number is prime.
    int n=37,c=0;
    if(n<=1)
    cout<<n<<" IS NOT A PRIME";
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c>0)
        cout<<n<<" IS NOT A PRIME";
    else
        cout<<n<<" IS A PRIME";
}

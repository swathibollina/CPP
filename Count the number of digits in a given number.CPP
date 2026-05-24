#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Count the number of digits in a given number..
    int n=1230,c=0;
    while(n!=0)
    {
        c++;
        n/=10;
    }
    cout<<c;
}

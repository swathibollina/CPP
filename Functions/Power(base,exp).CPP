#include <bits/stdc++.h>
using namespace std;

int power(int base,int exp)
{
    int t=base;
    for(int i=1;i<exp;i++)
    {
        base*=t;
    }
    return base;
}

int main() 
{
	// Write a function power(int base, int exp) to calculate base^exp.
	int base=5,exp=3;
	cout<<power(base,exp);
}

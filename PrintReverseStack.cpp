#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Push 5 elements onto a stack and print them in reverse order (pop one by one).
	int a[5]={1,2,3,4,5};
	stack<int> s;
	for(int i=0;i<5;i++)
	s.push(a[i]);
	while(!s.empty())
	{
	   int temp=s.top();
	   cout<<temp<<endl;
	   s.pop();
	}
}

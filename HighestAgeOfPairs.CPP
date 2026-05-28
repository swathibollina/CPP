#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Read N pairs of (name, age) and print the person with the highest age.
	vector<pair<string,int>> p={{"Swathi",23},{"Pavan",28},{"Swarna",26},{"Sunitha",44}};
	string name;
	int age=0;
	for(auto i:p)
	{
	    if(i.second>age)
	    {
	        age=i.second;
	        name=i.first;
	    }
	}
	cout<<name<<":"<<age;
}

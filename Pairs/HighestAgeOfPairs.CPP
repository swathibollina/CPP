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

// Using comparator
#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string,int> p1,pair<string,int> p2)
{
    return p1.second>p2.second;
}

int main() 
{
	// Read N pairs of (name, age) and print the person with the highest age.
	vector<pair<string,int>> v={{"Swathi",23},{"Pavan",28},{"Swarna",26},{"Sunitha",44}};
	sort(v.begin(), v.end(),comp);
	cout<<v[0].second;
}

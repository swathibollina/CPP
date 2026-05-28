#include <bits/stdc++.h>
using namespace std;

bool comp(map<string,int> m1, map<string,int> m2)
{
    return m1.first < m2.first;
}

int main() 
{
	// Given a list of student names and their marks, print each student's marks in alphabetical order.
	map<string,int> m={{"Swathi",50},{"Swarna",70},{"Sunitha",30},{"Priya",75}};
	sort(m.begin(), m.end(),comp);
	for(auto i:m)
	{
	    cout<<i.first<<" "<<i.second<<endl;
	}
}

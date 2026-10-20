#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Given a list of student names and their marks, print each student's marks in alphabetical order. 
	// Ordered map is already sorted based on keys
	map<string,int> m={{"Swathi",50},{"Swarna",70},{"Sunitha",30},{"Priya",75}};
	for(auto i:m)
	{
	    cout<<i.first<<" "<<i.second<<endl;
	}
}

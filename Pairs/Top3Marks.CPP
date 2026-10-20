#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string,int> p1,pair<string,int> p2)
{
    return p1.second>p2.second;
}

int main() 
{
	// Given pairs of (student_name, marks), print top 3 students.
	vector<pair<string,int>> v={{"Swathi",95},{"Pavan",98},{"Swarna",76},{"Sunitha",84}};
	sort(v.begin(), v.end(),comp);
	for(int i=0;i<3;i++)
	{
	    cout<<v[i].first<<" "<<v[i].second<<endl;
	}
}

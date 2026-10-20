#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string,int> p1,pair<string,int> p2)
{
    return p1.second<p2.second;
}

int main() 
{
	// Given a vector of pairs <string, int>, find the pair with the smallest integer value
	vector<pair<string,int>> v={{"Swathi",95},{"Pavan",98},{"Swarna",76},{"Sunitha",84}};
	sort(v.begin(), v.end(),comp);
	cout<<v[0].first<<" "<<v[0].second<<endl;
}

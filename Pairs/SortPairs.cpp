#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string,int> p1,pair<string,int> p2)
{
    return p1.second<p2.second;
}

int main() 
{
	// Sort a vector of pairs by the second element.
	vector<pair<string,int>> v={{"Swathi",23},{"Pavan",28},{"Swarna",26},{"Sunitha",44}};
	sort(v.begin(), v.end(),comp);
	for(int i=0;i<v.size();i++)
	{
	    cout<<v[i].first<<" "<<v[i].second<<endl;
	}
}

#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2)
{
    return abs(p1.first+p1.second)<abs(p2.first+p2.second);
}

int main() 
{
	// Given a vector of pairs <int, int> representing (x, y) coordinates, find the point closest to origin.
	vector<pair<int,int>> v={{1,2},{3,1},{5,1},{2,0}};
	sort(v.begin(), v.end(),comp);
	cout<<v[0].first<<" "<<v[0].second<<endl;
}

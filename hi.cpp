#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >>t;
	while(t--)
	{
		int n,k,count=0;
		cin >>n>>k;
		vector<char> v(n);
		set<char>set;
		map<char,int>m;
		for (int i = 0; i < n; i++) 
		{
			cin >>v[i];
			
		}
		for(auto x:v)
		{
			set.insert(x);
		}
		for (int i = 0; i < n; i++) 
		{
			m[v[i]]++;
		}
		for (int i = 0; i < n; i++) 
		{
			if (m[v[i]]%2==0)
			{
				count++;
			}
		}
		if (k+1>=count)
		{
			cout <<"YES"<<endl;
		}
		else
		{
			cout <<"NO"<<endl;
		}
	}
}
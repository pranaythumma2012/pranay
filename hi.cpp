#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin >>n;
	for (int i=0;i<n;i++)
	{
		int p; cin >>p;
		if (p<=10)
		{
			cout <<p<<endl;
		}
		else if (p<=100)
		{
			cout <<19-(10-p/10)<<endl;
		}
		else if (p<=1000)
		{
			cout <<28-(10-p/100)<<endl;
		}
		else if (p<=10000)
		{
			cout <<37-(10-p/1000)<<endl;
		}
		else if (p<=100000)
		{
			cout <<46-(10-p/10000)<<endl;
		}
		else if (p<=1000000)
		{
			cout <<55-(10-p/100000)<<endl;
		}

			
	}
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
    	int n,count=0;
    	cin >>n;
    	vector<int>v(n);
    	for (int i=0;i<n;i++)
    	{
    		cin >>v[i];
    	}
    	for (int i=0;i<n;i++)
    	{
    		if (v[i]==2)
    		{
    			count++;
    		}
    	}
    	if(count==0)
    	{
    		cout <<1<<endl;
    	}
    	
    	else if (count%2!=0)
    	{
    		cout <<"-1"<<endl;
    	}
    	else if (count==n)
    	{
    		cout <<count/2<<endl;
    	}
    	else
    	{
    		int a=0;
    		for (int i=0;i<n;i++)
    		{
    			if (v[i]==2)
    			a++;
    		if(a==count/2)
    		{
    			cout <<i+1<<endl;
    			break;
    		}

    		}
    	}



    	
    }
}
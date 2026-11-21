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
        string s;
        cin >>s;
        int p=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
                p=max(p,count);
            }
            else
            {
                count=0;
            }
        }
        cout <<p+2<<endl;
    }
}
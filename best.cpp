#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main ()
{
    ll t;
    cin >>t;
    while(t--)
    {
        ll n;
        cin >>n;
        ll count=1;
        while(n%count==0)
        {
            count++;
        }
        cout <<count-1<<endl;

    }
}
#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

ll sum(ll n)
{
    return n*(n+1)/2;
}

int main() 
{
    int t;
    cin >>t;
    while(t--)
    {
        ll n,k,x;
        cin >>n>>k>>x;
        ll mn=sum(k);
        ll total=sum(n);
        ll mid=sum(n-k);
        ll mx=total-mid;


        if(mn<=x&&x<=mx)
        {
            cout <<"YES"<<endl;
        }
        else
        {
            cout <<"NO"<<endl;
        }
        
    }
}
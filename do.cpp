#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
    int t;
    cin >>t;
    while(t--)
    {
        
        ll n,p;
        cin >>n>>p;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin >>v[i];
        }
        vector<ll> pre(n);
        pre[0]=v[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+v[i];
        }
        for(int i=0;i<p;i++)
        {

            ll l,r,k;
            cin >>l>>r>>k;
            ll a=pre[l-1];
            ll b=(r-l+1)*k;
            ll c;
            if(l>1 && r>1)
            {
                c=pre[n-1]-pre[r-1]-pre[l-2];
            }
            else 
            {
                c=pre[n-1]-pre[r-1];
            }
            ll d=c+b;
            if(d%2!=0)
            {
                cout <<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
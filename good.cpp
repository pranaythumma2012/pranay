#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        vector<int>v(n),sor,diff;
        for (int i = 0; i < n; i++) 
        {
            cin >>v[i];
            sor.push_back(v[i]);
        }
        sort(sor.begin(), sor.end());
        for (int i = 0; i < n; i++) 
        {
            diff.push_back(abs(sor[i]-v[i]));
        }
        int out=diff[0];
        for (int i = 1; i < n; i++) 
        {
            out= __gcd(diff[i],out);
        }
        cout <<out<<endl;


    }
}

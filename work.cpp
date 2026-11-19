#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t,count=0;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        while(n>=10)
        {
            n=n/10;
            count++;
        }
        cout <<count*9+n<<endl;
    }
}

#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=1; i<(a); i++)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,y,i;
        cin>>n;
        x=n%2020;
        y=n/2020;
        if(x<=y && y>=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
   return 0;
}

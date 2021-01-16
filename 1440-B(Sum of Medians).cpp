#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i,j,x,s=0,y=0;
        cin>>n>>k;
        x=n*k;
        ll a[x];
        f(i, x)
        cin>>a[i];
        reverse(a,a+x);

        ll m=n/2;
        for(i=m;i<x;i+=(m+1))
        {
            s+=a[i];
            y++;
            if(y==k) break;

        }
      cout<<s<<endl;

    }
   return 0;
}

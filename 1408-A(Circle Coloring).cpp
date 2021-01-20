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
        ll n,d,x,y,i,m=0;
        cin>>n;
        vector<int> v;
        ll a[n],b[n],c[n];
        f(i, n)
        cin>>a[i];
        f(i, n)
        cin>>b[i];
        f(i, n)
        cin>>c[i];
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1]) a[i+1]=b[i+1];
        }
            if(a[0]==a[n-1])
               {
                 if(b[0]==a[1])  a[0]=c[0];
                 else a[0]=b[0];
                }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        } cout<<endl;
    }
   return 0;
}

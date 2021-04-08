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
        ll i,n,k,m,cnt=0;
        cin>>n>>k;
        m=ceil(k*1.0/2);
        cout<<n-m<<endl;
        for(i=m;i<=n;i++)
        {
            if(i!=k)
                cout<<i<<" ";

        }
        cout<<endl;
    }

   return 0;
}

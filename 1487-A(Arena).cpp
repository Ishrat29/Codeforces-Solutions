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
        ll i,n,x,cnt=0;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        x=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]==x) cnt++;
        }
        if(cnt>1) cout<<n-cnt<<endl;
        else cout<<n-1<<endl;

    }
   return 0;
}

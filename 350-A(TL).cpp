#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
    ll i,n,m;
    cin>>n>>m;
    ll a[n],b[m];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n,greater<int>());
    sort(b,b+m);
    if(2*a[n-1]>=b[0] || a[0]>=b[0]) cout<<-1<<endl;
    else cout<<max(2*a[n-1],a[0])<<endl;

   return 0;
}

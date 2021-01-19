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
        ll n,d,x=0,i,m=0;
        cin>>n>>d;
        ll a[n],b[n];
        f(i, n)
        cin>>a[i];
        f(i, n)
        cin>>b[i];
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        f(i, d){
         if(b[i]>a[i]) swap(a[i],b[i]);
         else break;
        }
        f(i, n)
        {
            x+=a[i];
        }
        cout<<x<<endl;


    }
   return 0;
}

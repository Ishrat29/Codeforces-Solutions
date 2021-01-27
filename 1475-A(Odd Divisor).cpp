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
        ll n,x,i;
        cin>>n;
        if(n%2!=0){
            cout<<"YES"<<endl;
            continue;
        }
        while(n%2==0 && n>0)
            n/=2;
        if(n==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
   return 0;
}

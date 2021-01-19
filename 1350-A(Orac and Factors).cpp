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
        ll n,d,x,i,m=0;
        cin>>n>>d;
        if(n%2==0) cout<<n+(2*d)<<endl;
        else{
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                x=i;
                break;
            }
        }
        //cout<<x<<endl;
        cout<<n+(2*(d-1))+x<<endl;
        }

    }
   return 0;
}

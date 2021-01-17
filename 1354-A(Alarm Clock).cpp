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
        ll a,b,c,d,x=0,i,m=0;
        cin>>a>>b>>c>>d;
        if(b>=a)
        {
            cout<<b<<endl;
            continue;
        }
        else if(b<a && d>=c)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            ll k=a-b;
            ll l=c-d;
            if(k>l)
            {
                if(k%l==0) x=k/l;
                else x=(k/l)+1;
                cout<<(x*c)+b<<endl;
            }
            else
            {
                cout<<c+b<<endl;
            }
        }

    }
   return 0;
}

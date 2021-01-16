#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=3; i<=(a); i++)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,d,x,i,m=0,y;
        cin>>n;
        x=9;
        for(i=0;i<n;i++)
        {
         cout<<x;
         if(i<1) x--;
         else{
            x++;
            x%=10;
         }
        }
        cout<<endl;
    }
   return 0;
}

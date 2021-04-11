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
        ll i,n,m,k,x,r,c;
        cin>>n>>k;
        if(n<2*k+1) cout<<-1<<endl;
        else{
            cout<<1<<" ";
            for(i=2;i<=2*k+1;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }

            for(i=2*k+2;i<=n;i++)
            {
               cout<<i<<" ";
            }
            cout<<endl;
       }
    }
   return 0;
}

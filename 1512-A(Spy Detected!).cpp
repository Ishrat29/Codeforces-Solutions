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
        ll i,n,m,x,r,c;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
         for(i=0;i<n-1;i++){
             if(a[i]!=a[i+1]){
             if(a[i+2]==a[i] || a[i-1]==a[i])
              x=i+1;
             else x=i;
         }
         }
         /* for(i=n-1;i>0;i--){
             if(a[i]!=a[i-1])
             x=i+1;
         }*/
        cout<<x+1<<endl;
    }
   return 0;
}

#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=1; i<(a); i++)
using namespace std;
void s(ll a, ll d){
         if(a>=d*10)
         {
             cout<<"YES"<<endl;
             return;
         }
         for(ll i=1;i<=9;i++){
            if((a-(i*d))>=0 && (a-(i*d))%10==0){
                 cout<<"YES"<<endl;
                 return;
            }
         }
          cout<<"NO"<<endl;
          return;
}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,d,q,a,x=0;
        cin>>q>>d;
       for(i=0;i<q;i++){
         cin>>a;
         s(a,d);
       }
    }
    return 0;
}

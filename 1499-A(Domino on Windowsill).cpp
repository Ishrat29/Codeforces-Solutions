#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(i, n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,i,j,k1,k2,w,b,b1,T;
       cin>>n>>k1>>k2;
       cin>>w>>b;
       T=2*n;
       b1=T-(k1+k2);
       if((2*w<=(k1+k2)) && (2*b<=b1)) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    }

return 0;
}

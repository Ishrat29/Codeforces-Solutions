#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(i, n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,i,j,k=0,r,b,d;
       cin>>r>>b>>d;
       if(r>b) swap(r,b);
       if((r*(d+1))>=b) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
return 0;
}

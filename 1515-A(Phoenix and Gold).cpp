#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(i, n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,x,m,i,j,k=0;
       string s;
       vector<ll> v;
       cin>>n>>x;
       f(i,n){
           cin>>m;
           v.pb(m);
           k+=m;
       }
       if(k==x) {
        cout<<"NO"<<endl; continue;
       }
      sort(v.begin(),v.end());
      k=0;
      cout<<"YES"<<endl;
      for(i=0;i<n;i++){
        k+=v[i];
        if(k==x){
            swap(v[i],v[i+1]);
        }
         cout<<v[i]<<" ";
      }
      cout<<endl;
    }

return 0;
}

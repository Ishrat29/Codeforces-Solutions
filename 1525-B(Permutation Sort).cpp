#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(i, n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll m,n,i,j,k=0;
       string s;
       cin>>n;
       vector<ll> a,b;
       for(i=0;i<n;i++){
        cin>>m;
        a.pb(m);
       }
       b=a;
       sort(b.begin(),b.end());
       if(a==b) cout<<0<<endl;
       else if(a[0]==1 || a[n-1]==n) cout<<1<<endl;
       else if(a[0]==n && a[n-1]==1) cout<<3<<endl;
       else cout<<2<<endl;
    }

return 0;
}

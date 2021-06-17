#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(i, n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,i,j,k=0;
       string s;
       cin>>n>>s;
       ll a[1000]={0};
       f(i, n){
           if(a[s[i]]>0 && s[i-1]!=s[i]){
            k=1; break;
       }
       a[s[i]]++;
       }
       if(k) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;

    }

return 0;
}

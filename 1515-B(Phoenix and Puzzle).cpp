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
       cin>>n;
       i=1;
       while(2*i*i<n) i++;
       if(2*i*i==n){
        cout<<"YES"<<endl; continue;
       }
       i=1;
       while(4*i*i<n) i++;
       if(4*i*i==n){
        cout<<"YES"<<endl; continue;
       }
       cout<<"NO"<<endl;
    }

return 0;
}

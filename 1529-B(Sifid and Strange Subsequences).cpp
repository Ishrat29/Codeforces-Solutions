#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(i, n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,m,i,j,min=INT_MAX,cnt=0;
       cin>>n;
       ll a[n];
       f(i, n){
           cin>>a[i];
       }
       sort(a, a+n);
       f(i, n){
           if(i>0 && (a[i]-a[i-1])<min)
            min=a[i]-a[i-1];
           if(a[i]>min) break;
           else cnt++;
       }
       cout<<cnt<<endl;
    }


return 0;
}

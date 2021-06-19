#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(i, n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,i,j,k=0,l=INT_MAX,m=INT_MIN,x,y,a1,b,c,d,e;
       cin>>n;
       ll a[n];
      for(i=0;i<n;i++){
           cin>>a[i];
           if(a[i]>m) {m=a[i]; y=i+1;}
           if(a[i]<l) {l=a[i]; x=i+1;}
       }
       a1=min(x-1, n-x); b=min(y-1, n-y); c=abs(x-y);
       if(c>a1 && c>b) cout<<a1+b+2<<endl;
      else{ d=min(a1,b); e=min(max(a1,b),c);
       cout<<d+e+1<<endl;}


    }
    return 0;
}


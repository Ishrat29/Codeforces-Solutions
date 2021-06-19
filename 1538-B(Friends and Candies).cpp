#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(i, n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,i,j,k=0,cnt=0;
       double x;
       cin>>n;
       ll a[n];
      for(i=0;i<n;i++){
           cin>>a[i]; k+=a[i];
       }
       x=((1.0)*k)/n;
       if(x==int(x)){
        for(i=0;i<n;i++){
            if(a[i]>x) cnt++;
        }
        cout<<cnt<<endl;
    }
       else cout<<"-1"<<endl;
    }

return 0;
}

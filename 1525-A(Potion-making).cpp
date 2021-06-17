#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(i, n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,m,x,i,j,k=0;
       cin>>n;
       m=100-n; x=__gcd(n,m);

       cout<<n/x + m/x<<endl;

    }

return 0;
}

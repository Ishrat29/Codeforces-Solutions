#include<bits/stdc++.h>
#define ll long
#define f(i, n) for(i=0;i<n;i++)
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--){
	 ll n,m, r1,r2,r3, r4,p=0, i, j, l,y, k=0;
     cin>>n>>m;
     ll a[n];
     for(i=0;i<n;i++){
        cin>>a[i];
        k+=a[i];
     }
     y=k-m;
     if(y>0) cout<<y<<endl;
     else cout<<0<<endl;
}
	return 0;
}

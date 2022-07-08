#include<bits/stdc++.h>
#define ll long
#define f(i, n) for(i=0;i<n;i++)
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--){
	 ll n,m,i, p=2;
	 vector<ll> v;
     cin>>n;
     cout<<2<<endl;
    for(int i=1;i<=n;i+=2){
    for(int j=i;j<=n;j*=2){
        v.push_back(j);
    }
    }
     for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;
    }
	return 0;
}

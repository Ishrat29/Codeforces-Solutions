#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(i, n) for(ll i=1;i<n;i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,cnt=0;
		cin>>n;
		f(i, 10){
		    for(j=i;j<=n;){
                cnt++;
                j=(j*10)+i;
		    }
		}
		cout<<cnt<<endl;
    }

return 0;
}

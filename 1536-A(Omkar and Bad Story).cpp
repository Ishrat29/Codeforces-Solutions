#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,i,k=INT_MIN,m=0;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0) m=1;
            k=max(a[i],k);
        }
        if(!m){
            cout<<"YES"<<endl;
            cout<<k+1<<endl;
            for(i=0;i<=k;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,c=0,x,i,m=INT_MAX;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            m=min(a[i],m);
        }

        for(i=0;i<n;i++){
                if(a[i]>m) c++;
        }
        cout<<c<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,a,b,c,d,i,x,y,w,z,m=0;
        cin>>a>>b>>c>>d;
        x=max(a,b); y= min(a,b);
        w=max(c,d); z=min(c,d);
        if(x>z && w>y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(i, n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,m,i,j,k=0;
       string s,s1;
       cin>>n>>m>>s;
       s="0"+s+"0";
       s1=s;
       for(i=1;i<=min(m,n);i++){
            s=s1;
        for(j=1;j<=n;j++){
            if(s[j]=='0'){
                if(s[j-1]=='0' && s[j+1]=='1')
                    s1[j]='1';
                else if(s[j-1]=='1' && s[j+1]=='0')
                    s1[j]='1';
            }
        }
    }
    s=s1.substr(1, n);
    cout<<s<<endl;

    }

return 0;
}

#include<bits/stdc++.h>
#define ll long
#define f(i, n) for(i=0;i<n;i++)
using namespace std;
int main(){

     ll t, n, i, j, l, r, k;
     cin>>t;
     while(t--){
        string s;
        cin>>s;
        k=0;
        ll m = s.size();
        for(i=0;i<m;i++){
            if(s[i]=='N') k++;
        }
        if(k==1)cout<<"NO"<<endl;

        else cout<<"YES"<<endl;
     }
     return 0;
}

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(i, n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,i,j,k=0;
       string s;
       cin>>n;
       ll a[n][n]={0};
       if(n==2) {cout<<-1<<endl;}
       else{
       for(i=0;i<n;i++){
           for(j=0;j<n;j++){
            a[i][j]=(j-i+n)%n * n + i;
           }
       }
        for(i=0;i<n;i++){
           for(j=0;j<n;j++){
                cout<<a[i][j]+1<<" ";
           }
           cout<<endl;
        }
       }

    }

return 0;
}

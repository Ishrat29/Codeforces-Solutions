#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main(){
    freopen( "input.txt","r",stdin);
    freopen( "output.txt","w",stdout);
    ll n,m,i;
    cin>>n>>m;
    if(n>m)
    {
        for(i=0;i<(2*m)+1;i++){
            if(i%2==0) cout<<"B";
            else cout<<"G";
        }
        for(i=0;i<(m+n)-(2*m+1);i++)
            cout<<"B";
    }
    else if(n<m)
    {
        for(i=0;i<(2*n)+1;i++){
            if(i%2==0) cout<<"G";
            else cout<<"B";
        }
        for(i=0;i<(m+n)-(2*n+1);i++)
            cout<<"G";
    }
    else
    {
        for(i=0;i<m+n;i++){
           if(i%2==0) cout<<"G";
            else cout<<"B";
        }
    }
}

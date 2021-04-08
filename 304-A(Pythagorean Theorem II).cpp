#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main(){
    ll n,i,j,k,m,p,cnt=0;
    cin>>n;

    for(i=1;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            m=i*i+j*j;
            p=sqrt(m);
            if(p<=n && p*p==m) cnt++;
        }
    }
    cout<<cnt<<endl;

}

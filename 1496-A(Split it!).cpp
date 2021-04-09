#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,n,m,x,r,c=1;
        cin>>n>>m;
        string s,a;
        cin>>s;
        if(m==0) {
        cout<<"YES"<<endl;
        continue;}
        if(n<2*m+1) cout<<"NO"<<endl;
        else
        {
           for(i=0;i<m;i++){
            if(s[i]!=s[n-i-1]){
               c=0;
                break;}
           }
           if(c) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;

        }

    }
   return 0;
}

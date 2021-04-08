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
        ll i,n,x=0,cnt=0;
        string s;
        cin>>s;
        n=s.size();
        for(i=0;i<n;i++){
        if(s[i]=='a') x++;}
        if(x==n) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            string a,b;
            a=s+'a';
            b=a;
            reverse(b.begin(),b.end());
        if(a==b) cout<<"a"<<s<<endl;
        else cout<<s<<"a"<<endl;

        }

    }
   return 0;
}

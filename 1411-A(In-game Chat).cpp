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
        ll n,d,x=0,i,y=0,m=0;
        cin>>n;
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        f(i, n)
        {
            if(s[i]==')') y++;
            if(s[i]!=')') break;
        }
        m=n-y;
        if(y>m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
   return 0;
}

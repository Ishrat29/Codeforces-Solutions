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
        ll m,i,k,j,x=0,a=0,b=0;
        string s,s1,s2;
        cin>>s;
        m=s.size();
        s1=s; s2=s;
        reverse(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s2[0]==s2[m-1]) a=1;
        if(a==1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        if(s1==s)
        {
            cout<<s2<<endl;
        }
        else if(s1!=s) cout<<s<<endl;


    }
   return 0;
}

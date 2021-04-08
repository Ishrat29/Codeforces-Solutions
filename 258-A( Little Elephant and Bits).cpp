#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
    ll i,n,m,x=-1,r,c=0;
    string s;
    cin>>s;
    n=s.size();
    for(i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            x=i;
            c=1;
            break;
        }
    }
    if(c)
    {
        for(i=0; i<x; i++)
        {
            cout<<s[i];
        }
        for(i=x+1; i<n; i++)
        {
            cout<<s[i];
        }
    }
    else
    {
        for(i=0; i<n-1; i++)
        {
            cout<<s[i];
        }
    }

    return 0;
}

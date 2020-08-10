#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,m,cnt=0;
        cin>>n>>m;
        string s[n];
        for(i=0;i<n;i++)
            cin>>s[i];
        for(i=0;i<n;i++)
        {
            if(s[i][m-1]=='R')
                cnt++;
        }
        for(i=0;i<m;i++)
        {
            if(s[n-1][i]=='D')
                cnt++;
        }
     cout<<cnt<<endl;
    }
    return 0;
}

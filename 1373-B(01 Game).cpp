#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n,i,cnt=0,x,m;
        n=s.size();

        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
             cnt++;
        }
       x=n-cnt;
       m=min(x,cnt);

       if(m%2==0)
            cout<<"NET"<<endl;
        else if(m%2!=0)
            cout<<"DA"<<endl;

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int i,x;

        string s;
        cin>>s;
        x=s.size();
        cout<<s[0];
        for(i=1;i<x-1;i+=2)
        {
            if(s[i]==s[i+1])
             cout<<s[i];
        }
      cout<<s[x-1]<<endl;
    }
    return 0;
}

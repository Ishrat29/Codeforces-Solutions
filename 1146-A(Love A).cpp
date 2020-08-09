#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x,cnt=0;
    x=s.size();
    for(int i=0;i<x;i++)
    {
        if(s[i]=='a')
            cnt++;
    }
    if(cnt>(x/2))
        cout<<x<<endl;
    else
        cout<<(cnt+(cnt-1))<<endl;
    return 0;
}

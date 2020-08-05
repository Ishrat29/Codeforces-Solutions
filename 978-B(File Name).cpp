#include<bits/stdc++.h>
#define ll long long int
#define vll vector ll
using namespace std;
int main()
{
    int n,cnt=0,i;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
            cnt++;
            //i=i+3;
    }
    cout<<cnt;
    return 0;
}

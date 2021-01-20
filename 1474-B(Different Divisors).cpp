#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool div(ll n)
{
    bool s=true;
    if(n<=1)
        return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            s=false;
            break;
        }
    }
    return s;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, a=0, b=0, s ,i, j;
        cin>>n;
        for(i=1+n;i<=40001;i++)
        {
            if(div(i))
            {
                a=i;
                break;
            }
        }
        for(j=a+n;j<=40001;j++)
        {
            if(div(j))
            {
                b=j;
                break;
            }
        }

        s=a*b;
        cout<<s<<endl;
    }
}

#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{

    ll n,m,i,j,x=0;
    cin>>n>>m;
    ll a[m];
    f(i, m)
    cin>>a[i];
    x+=a[0]-1;
    //cout<<x<<' ';
    f(i, m-1)
    {
        if(a[i+1]>=a[i]) x+=abs(a[i]-a[i+1]);
        else{
            x+=(n-a[i])+a[i+1];
        }
        //cout<<x<<' ';
    }
    cout<<x<<endl;

   return 0;
}

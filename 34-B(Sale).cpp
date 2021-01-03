#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
    ll n,m,i,j=0,x=0,s=0;
    cin>>n>>m;
    ll a[n],b[n];
    f(i, n)
    {
        cin>>a[i];
        if(a[i]<0) x++;
    }
    f(i, n)
    {

        if(a[i]<0)
        {
            b[j]=a[i];
            j++;
        }
    }
    sort(b,b+x);
    ll y=min(x,m);
    f(j, y)
    {
        s+=abs(b[j]);

    }
    cout<<s<<endl;
    return 0;
}

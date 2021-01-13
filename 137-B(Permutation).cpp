#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
    ll n,i,j,cnt=0;
    cin>>n;
    ll a[n];
    f(i, n)
    cin>>a[i];
    sort(a,a+n);
    f(i, n)
    {
        if(a[i]>n) cnt++;
        else if(a[i]==a[i+1]) cnt++;
    }
    cout<<cnt<<endl;
   return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,flag=0;
    cin>>n;
    long long a[n];
    for(unsigned i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    if(a[n-1]!=1) a[n-1]=1 ;
    else a[n-1]=2;
    sort(a,a+n);
    for(unsigned i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

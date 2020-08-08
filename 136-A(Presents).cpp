#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    int a[n];
    for(i=1; i<=n; i++)
    {
        cin>>x;
        a[x]=i;
    }

    for(i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    return 0;
}

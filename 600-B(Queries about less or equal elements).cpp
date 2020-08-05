#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,x;
    cin>>n>>m;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    for(i=0; i<m; i++)
    {
        cin>>x;
        k=upper_bound(a,a+n,x)-a;
        cout<<k<<" ";
    }

    cout<<endl;

    return 0;
}

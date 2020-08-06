#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n,greater<int>());

    if(a[0]==1)
    {
        for(i=0; i<n-1; i++)
        {
            cout<<a[i]<<" ";
        }

        cout<<"2"<<endl;
        return 0;
    }
    else
    {
        sort(a,a+n);
        cout<<1<<" ";
        for(i=0; i<n-1; i++)
        {
            cout<<a[i]<<" ";
        }

        cout<<endl;
    }
    return 0;
}

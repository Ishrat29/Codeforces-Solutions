#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,x=0;
        cin>>n;
        int a[n],b[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n,greater<int>());

        for(i=0; i<n-1; i++)
        {
            b[i]=a[i]-a[i+1];
        }
        for(i=0; i<n-1; i++)
        {
            if(b[i]>1)
                x=1;
        }
        if(x==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
    return 0;
}

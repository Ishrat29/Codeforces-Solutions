#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll int n,i,sum=0,mina=INT_MAX,tina=INT_MAX;
        cin>>n;
        ll a[n],b[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            mina=min(a[i],mina);
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
            tina=min(b[i],tina);
        }

        for(i=0; i<n; i++)
        {
            sum=sum+max(a[i]-mina,b[i]-tina);
        }
        cout<<sum<<endl;

    }
    return 0;
}

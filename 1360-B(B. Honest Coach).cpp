#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,y;
        cin>>n;
        long int a[n],x[n];
        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            x[i]=abs(a[i]-a[i+1]);
        }
        sort(x,x+n);
        cout<<x[0]<<endl;



    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t,n,i;
    cin>>t;
    while(t--)
    {
        int ans=0,sum=0,x,y;
        cin>>n;
        for(i=1;i<(n/2);i++)
        {
         sum=sum+pow(2,i);
        }
        x=sum+pow(2,n);

        for(i=(n/2);i<n;i++)
        {
            ans=ans+pow(2,i);
        }
        y=x-ans;

        cout<<y<<endl;
        ans=0;
    }

return 0;
}

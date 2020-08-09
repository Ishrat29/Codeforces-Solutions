#include<bits/stdc++.h>
#define sz 1000000000
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,x,sum=0,ans=0;
        cin>>n;
        x=(n/2);
        if(x%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;

            long long a[n],i,even=2,odd=1;
            for(i=0; i<n; i++)
            {
                if(i<x)
                {
                    a[i]=even;
                    even+=2;
                    sum=sum+a[i];
                }
                else if(i==n-1)
                {
                    a[i]= sum;
                }
                else
                {
                    a[i]=odd;
                    odd+=2;
                    sum=sum-a[i];
                }



                cout<<a[i]<<" ";
            }
            cout<<endl;

        }
    }
    return 0;
}

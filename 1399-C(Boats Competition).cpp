#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k,m=0,x=0;
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(k=2;k<=100;k++)
        {
            i=0;
            j=n-1;
            m=0;
            while(i<j)
            {
                if(a[i]+a[j]==k)
                {
                    i++;
                    j--;
                    m++;
                }
                else if(a[i]+a[j]>k)
                {
                    j--;
                }
                else
                {
                    i++;
                }

            }
            x=max(x,m);
        }
        cout<<x<<endl;
    }
    return 0;
}

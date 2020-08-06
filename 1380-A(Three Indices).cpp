#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k,check=0,x,y,z;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n-2; i++)
        {
            for(j=i+1; j<n-1; j++)
            {

                    if(a[i]<a[j] &&a[j]>a[j+1])
                    {
                        check=1;
                        x=i;
                        y=j;
                        z=j+1;
                        break;
                    }

            }
        }
        if(check)
        {
            cout<<"YES"<<endl;
            cout<<x+1<<' '<<y+1<<' '<<z+1<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j,x,cnt=0;
        cin>>n>>m;
        int a[n],b[m];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i]==b[j])
                {
                    x=a[i];
                    cnt=1;
                    break;
                }
            }
        }
        if(cnt==1){
       cout<<"YES"<<endl;
       cout<<1<<" "<<x<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int a[2*n+1];
        for(i=0; i<2*n; i++)
        {
            cin>>a[i];
        }
        bool vis[2*n+2];
        memset(vis, 0, sizeof(vis));
        for(i=0; i<2*n; i++)
        {
            for(j=i+1; j<2*n; j++)
            {
                if(a[i]==a[j])
                vis[j]=1;
            }
        }
        for(i=0; i<2*n; i++)
        {
            if(vis[i]==0)
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

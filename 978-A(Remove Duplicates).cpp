#include<bits/stdc++.h>
#define ll long long int
#define vll vector ll
using namespace std;
int main()
{

    long long n,m,i,cnt=0,j;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bool vis[n+2];

   memset(vis, 0, sizeof(vis));
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
            vis[i]=1;

       }
   }
   for(i=0;i<n;i++)
   {
       if(vis[i]==0)
        cnt++;
   }
   cout<<cnt<<endl;
   for(i=0;i<n;i++)
   {
       if(vis[i]==0)
        cout<<a[i]<<" ";
   }
   cout<<endl;


    return 0;
}

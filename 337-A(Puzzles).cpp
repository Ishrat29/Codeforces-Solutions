#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,x=INT_MAX;
    cin>>n>>m;
    int a[m];
    for(i=0; i<m; i++)
        cin>>a[i];

     sort(a,a+m);

   for(i=0;i<=m-n;i++)
   {
     x=min(x,(a[i+(n-1)]-a[i]));
   }
   cout<<x<<endl;
    return 0;
}

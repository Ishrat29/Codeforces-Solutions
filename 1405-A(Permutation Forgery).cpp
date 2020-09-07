#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
    ll n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
     for(j=n-1;j>=0;j--){
        cout<<a[j]<<" ";
   }
   cout<<endl;
   }
   return 0;
}

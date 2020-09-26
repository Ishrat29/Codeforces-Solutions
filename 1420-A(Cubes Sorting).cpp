#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
    ll n,i,j,x,cnt=0,odd=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1]){
            cnt++;}
    }

     if(cnt==n-1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    }

   return 0;
}

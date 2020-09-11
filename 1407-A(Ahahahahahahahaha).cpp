#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
    ll n,i,j,x=0,b=0,m;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
     for(i=0;i<n;i++)
     {
         if(a[i]==1)
            x++;
         else b++;
     }

       if(x>b){
         if(x%2==1)
         {   cout<<x-1<<endl;
             for(i=0;i<x-1;i++)
             {
                 cout<<1<<" ";
             }
             cout<<endl;
         }
         else{
                cout<<x<<endl;
            for(i=0;i<x;i++)
             {
                 cout<<1<<" ";
             }
             cout<<endl;
         }
       }
       else{
           /* if(b%2==1)
         {   cout<<b-1<<endl;
             for(i=0;i<b-1;i++)
             {
                 cout<<0<<" ";
             }
             cout<<endl;
         }
         else{ */
                cout<<b<<endl;
            for(i=0;i<b;i++)
             {
                 cout<<0<<" ";
             }
             cout<<endl;
         }

       }
   return 0;
}

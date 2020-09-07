#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
    ll n,a,k;
    cin>>a>>k;

     if(k<=a)
        cout<<(a+k)%2<<endl;
     else
            cout<<abs(a-k)<<endl;

   }
   return 0;
}

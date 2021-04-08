#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
        ll i,n,r,c;
        int x=0;
        unordered_map<int,int>m;
        cin>>n;
        ll a[n];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           m[a[i]]++;
       }
       for(auto k:m){
       x=max(x,k.second);
       }
       if(x<=(n/2)+1 && n%2==1) cout<<"YES"<<endl;
       else if(x<=(n/2) && n%2==0) cout<<"YES"<<endl;
       else  cout<<"NO"<<endl;

   return 0;
}

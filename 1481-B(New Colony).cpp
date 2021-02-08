#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=1; i<(a); i++)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,n,k;
        cin>>n>>k;
        ll a[n];

       for(i=0;i<n;i++){
       cin>>a[i];
        }
        for(i=0;i<k;i++){
            for(j=0;j<n-1;j++)
                if(a[j]<a[j+1])
                {
                    a[j]++;
                    break;
                }
                if(j==(n-1)) {cout<<"-1"<<endl; break;}
                else if(i==(k-1)) cout<<j+1<<endl;
            }
    }
   return 0;
}

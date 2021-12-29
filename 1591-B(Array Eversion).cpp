#include<bits/stdc++.h>
#define ll long
#define f(i, n) for(i=0;i<n;i++)
using namespace std;
int main(){

     ll t, n, i, j, l, r, k;
     cin>>t;
     while(t--){
        cin>>n;
        ll a[n];
        ll mx = INT_MIN, x=0, y;
        for(i=0;i<n;i++){
          cin>>a[i];
           if(a[i]>mx){ mx=a[i]; k=i;}
        }

        y=a[n-1];
        for(i=n-1;i>=k;i--){
             if(a[i]>y){
                y=a[i];
                x++;
            }
        }

        cout<<x<<endl;
     }
     return 0;


}

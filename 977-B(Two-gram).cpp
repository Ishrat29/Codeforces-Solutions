#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{

        ll i,j,n,x=0,r,c=0;
        cin>>n;
        string a;
        cin>>a;
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1;j++){
                if(a[i]==a[j] && a[i+1]==a[j+1]){
                    c++;
                }
            }
                if(c>x){
                x=c; r=i;
               }
              c=0;
        }

     cout<<a[r]<<a[r+1]<<endl;
   return 0;
}

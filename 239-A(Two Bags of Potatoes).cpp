#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{

        ll i,n,m,k,y,x,r,c=0;
        cin>>y>>k>>n;
        if(y<n){
            x=k-(y%k);
        }
        else{
        cout<<-1<<endl;
        return 0;
        }
        while(x<=n-y){
            cout<<x<<" ";
            c=1;
            x+=k;
            }
            if(!c) cout<<-1<<endl;
   return 0;
}

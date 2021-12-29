#include<bits/stdc++.h>
#define ll long
#define f(i, n) for(i=0;i<n;i++)
using namespace std;


int main()
{
	 ll t, n,m, r1,r2,r3, r4,p, i, j, l,a,c,b, k;
     cin>>t;
     while(t--){
     cin>>n>>m>>r1>>r2>>r3>>r4;
     ll x=INT_MAX;
     if(r3>=r1){
        x=min(x,r3-r1);
     }
     else{
        x=min(x,2*n-r1-r3);
     }
     ll y=INT_MAX;
      if(r4>=r2){
        y=min(y,r4-r2);
     }
     else{
        y=min(y,2*m-r2-r4);
     }

     cout<<min(x,y)<<endl;
    }

	return 0;
}

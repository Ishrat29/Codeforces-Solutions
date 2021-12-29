#include<bits/stdc++.h>
#define ll long
#define f(i, n) for(i=0;i<n;i++)
using namespace std;


int main()
{
	 ll t, n,m, r1,r2,r3, r4,p=0, i, j, l,x,y, k=0;
     cin>>n>>m;
     ll a[n],b[m];
     for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==1) p++;
     }
     x=n-p;
     for(i=0;i<m;i++){
        cin>>b[i];
        if(b[i]%2==1) k++;
     }
     y=m-k;

     cout<<min(p,y)+min(k,x)<<endl;


	return 0;
}

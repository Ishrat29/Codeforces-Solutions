#include<bits/stdc++.h>
typedef long long ll;
#define f(i, n) for(i=0;i<n;i++)
using namespace std;


int main()
{
	 ll t, n,m, w, h, p, u, i, j,x,y,k,l,g,z;
     cin>>t;
     while(t--){
     cin>>w>>h;
     cin>>k;
     ll a[k];
     for(i=0;i<k;i++){
        cin>>a[i];
     }
     cin>>l;
     ll b[l];
     for(i=0;i<l;i++){
        cin>>b[i];
     }

     x=a[k-1]-a[0];
     y=b[l-1]-b[0];
     p=max(x,y)*h;

     cin>>m;
     ll c[m];
     for(i=0;i<m;i++){
        cin>>c[i];
     }
     cin>>n;
     ll d[n];
     for(i=0;i<n;i++){
        cin>>d[i];
     }

     z=c[m-1]-c[0];
     g=d[n-1]-d[0];

     u=max(z,g)*w;



     cout<<max(u,p)<<endl;



    }

	return 0;
}

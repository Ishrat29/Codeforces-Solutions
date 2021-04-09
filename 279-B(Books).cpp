#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
        ll i,j,n,t,x=0,r=0,c=0;
        cin>>n>>t;
        ll a[n];
        f(i, n){
        cin>>a[i];
        }
        i=0; j=0;
        for(i=0;i<n;i++){
            c+=a[i];
            if(c>t){
                x=max(x,r);
                c-=a[j]; j++;
            }
            else r++;
        }
		x = max(x, r);
	cout<<r<<endl;
   return 0;
}

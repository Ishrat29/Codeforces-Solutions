#include<bits/stdc++.h>
#define ll long
#define f(i, n) for(i=0;i<n;i++)
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--){
	 ll n,m,a,b,c,d;
     cin>>a>>b>>c>>d;
     if((a+b+c+d)==4) cout<<"2"<<endl;
     else if((a+b+c+d)==0) cout<<"0"<<endl;
     else cout<<"1"<<endl;
    }
	return 0;
}

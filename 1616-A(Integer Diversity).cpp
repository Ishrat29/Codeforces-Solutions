#include<bits/stdc++.h>
typedef long long ll;
#define f(i, n) for(i=0;i<n;i++)
using namespace std;


int main()
{
	 ll t, n,m, r1,r2,r3, r4,p=0, i, j, l,x,y, k=0;
     cin>>t;
     while(t--){
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_set<ll> s;
        k=0; p=0;
        for(i=0;i<n;i++){
            if (s.find(a[i]) == s.end()) {
                 s.insert((a[i]));
                 }
             else s.insert(-a[i]);
        }
       cout<<s.size()<<endl;

     }

	return 0;
}

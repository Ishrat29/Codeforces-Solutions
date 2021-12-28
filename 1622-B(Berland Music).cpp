#include<bits/stdc++.h>
#define ll long
#define f(i, n) for(i=0;i<n;i++)
using namespace std;


int main()
{
	 ll t, n, l1,l2,l3, i, j, l, r, k;
	 string s;
     cin>>t;
     while(t--){
        cin>>n;
     vector<ll> v(n),x(n);
     for(i=0;i<n;i++){
        cin>>v[i];
     }
     cin>>s;
     set<pair<ll,ll> > z;
     set<pair<ll,ll> > o;

     for(i=0;i<n;i++){
        if(s[i]=='0'){
            z.insert({v[i], i});
        }
        else   o.insert({v[i], i});
     }
     ll y=1;
     for(auto it:z){
        x[it.second]=y;
        y++;
    }
    for(auto it:o){
        x[it.second]=y;
        y++;
    }

    for(i=0;i<n;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
	return 0;
}

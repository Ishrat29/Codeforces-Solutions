#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,a,b,c,d,i,j,x,y,w,z,m=0;
        cin>>n;
        vector<int> v1,v2;
        for(i=0;i<n;i++){
            cin>>a;
            if(a%2==1) v1.push_back(a);
            else v2.push_back(a);
            }
        while(!v1.empty())
        {
            v2.push_back(v1.back());
            v1.pop_back();
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(__gcd(v2[i], 2*v2[j])>1) m++;
            }
        }
        cout<<m<<endl;

    }
    return 0;
}

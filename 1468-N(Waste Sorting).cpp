#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=1; i<(a); i++)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll c1,c2,c3,a1,a2,a3,a4,a5,k1,k2,n,x,i;
        cin>>c1>>c2>>c3;
        cin>>a1>>a2>>a3>>a4>>a5;
        if(c1<a1 || c2<a2 || c3<a3) { cout<<"NO"<<endl; continue;}
        else{
        c1=c1-a1;
        c2=c2-a2;
        c3=c3-a3;
        k1=a4-min(c1,a4);
        k2=a5-min(c2,a5);
        c1-=min(c1,a4); c2-=min(c2,a5);
        c3-=(k1+k2);
        if(c1<0 || c2<0 || c3<0)  cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        }

    }
   return 0;
}

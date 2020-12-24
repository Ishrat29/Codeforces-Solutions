#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n%4==0){
        for(ll i=0;i<(n/4);i++)
        {
            cout<<"a"<<"b"<<"c"<<"d";
        }
        cout<<endl;
    }
    if(n%4==1){
        for(ll i=0;i<(n/4);i++)
        {
            cout<<"a"<<"b"<<"c"<<"d";
        }
        cout<<"a"<<endl;
    }
    if(n%4==2){
        for(ll i=0;i<(n/4);i++)
        {
            cout<<"a"<<"b"<<"c"<<"d";
        }
        cout<<"a"<<"b"<<endl;
    }
    if(n%4==3){
        for(ll i=0;i<(n/4);i++)
        {
            cout<<"a"<<"b"<<"c"<<"d";
        }
        cout<<"a"<<"b"<<"c"<<endl;
    }
   return 0;
}

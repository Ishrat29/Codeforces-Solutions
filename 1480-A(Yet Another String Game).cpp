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
        ll i;
        string s;
        cin>>s;
       for(i=0;i<s.size();i++){
        if(i%2==1){
            if(s[i]=='z') s[i]='y';
                else s[i]='z';
        }
        else{
            if(s[i]=='a') s[i]='b';
                else s[i]='a';
        }
       }
       cout<<s<<endl;
    }
   return 0;
}

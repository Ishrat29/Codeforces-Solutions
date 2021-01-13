#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
        ll m,i,k,j,x=0,a=0,b=0;
        string s;
        cin>>s;
        m=s.size();
       for(i=0;i<m;i++){
            if(s[i]=='4') x++;
           else if(s[i]=='7') a++;
       }
        if(x==0 && a==0)cout<<"-1"<<endl;
        else if(x==a) cout<<"4"<<endl;
        else if(x>a) cout<<"4"<<endl;
        else if(x<a) cout<<"7"<<endl;

   return 0;
}

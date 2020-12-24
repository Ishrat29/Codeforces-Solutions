#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i;
    cin>>n;
    string s;
    cin>>s;
    if(n==2 || n==3)
    {
        cout<<s<<endl;
    }
    else {
        if(n%2==0)
           {
            for(i=0;i<n;i+=2){
            if(i!=(n-2))
            {
                cout<<s[i]<<s[i+1]<<"-";
            }
            else
                cout<<s[i]<<s[i+1];
           }
           cout<<endl;
    }
    else {
            cout<<s[0]<<s[1]<<s[2]<<"-";
            for(i=3;i<n;i+=2){
            if(i!=(n-2))
            {
                cout<<s[i]<<s[i+1]<<"-";
            }
            else
                cout<<s[i]<<s[i+1];
            }
           cout<<endl;
    }
    }

    return 0;
}

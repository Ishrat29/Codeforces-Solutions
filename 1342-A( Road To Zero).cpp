#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long x,y,a,b,s=0;
        cin>>x>>y>>a>>b;
     if(a+a<b)
        cout<<((x+y)*a)<<endl;
     else
        cout<<((abs(x-y)*a)+(min(x,y)*b))<<endl;


    }
    return 0;
}

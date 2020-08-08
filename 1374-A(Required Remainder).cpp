#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m=0;
    cin>>t;
    while(t--)
    {
        long long int x,y,n,a,b;
        cin>>x>>y>>n;

        a=n-(n%x)+y;
        b=n-(n%x)-(x-y);

        if(a<=n)
            cout<<a<<endl;
        else
            cout<<b<<endl;

    }
    return 0;
}



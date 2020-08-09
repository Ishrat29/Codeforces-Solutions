#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long  t,x,n,m;
    cin>>t;
    while(t--)
    {
        cin>>x>>n>>m;
        while(x>20 && n>0)
        {
            x=x/2 +10;
            n--;
        }
        if(x>10*m)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}

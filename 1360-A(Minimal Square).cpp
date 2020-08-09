#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        if(a<b)
        {
            int x=a+a;
            if(x>=b)
                cout<<(x*x)<<endl;
            else
                cout<<(b*b)<<endl;

        }

        if(a>=b)
        {
            int x=b+b;
            if(x>=a)
                cout<<(x*x)<<endl;
            else
                cout<<(a*a)<<endl;

        }
    }
    return 0;

}

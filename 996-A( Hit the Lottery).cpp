#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x=0,y=0,z=0,a=0;
    cin>>n;

    if(n/100>=1)
    {
        x=(n/100);
        n=(n-(x*100));
    }
    if(n/20>=1)
    {
        y=(n/20);
        n=(n-(y*20));
    }
    if(n/10>=1)
    {
        z=(n/10);
        n=(n-(z*10));
    }
    if(n/5>=1)
    {
        a=(n/5);
        n=(n-(a*5));
    }

    cout<<x+y+z+a+n<<endl;

    return 0;

}

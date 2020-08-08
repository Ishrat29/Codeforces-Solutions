#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m=0,x,y,r,i;
    cin>>n>>r;
    for(i=1; i<=1000; i++)
    {
        y=n*i;
        x=y%10;
        if((x==0)||(x==r))
        {
            m=i;
            break;
        }

    }
    // cout<<n<<" ";cout<<x<<" ";
    cout<<m<<endl;
    return 0;
}

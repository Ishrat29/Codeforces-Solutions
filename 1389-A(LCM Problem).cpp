#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        if(r<2*l)
            cout<<"-1"<<" "<<"-1"<<endl;
        else
            cout<<l<<" "<<(2*l)<<endl;

    }
    return 0;
}

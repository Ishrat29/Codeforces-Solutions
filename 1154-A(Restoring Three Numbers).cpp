#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[4],x,y,z;
    for(unsigned i=0;i<4;i++)
        cin>>a[i];

    sort(a,a+4,greater<int>());

    x=a[0]-a[1];
    y=a[0]-a[2];
    z=a[0]-a[3];
    cout<<x<<" "<<y<<" "<<z<<endl;

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long x=0,y,i;
    cin>>n;

    for(i=0;i<n;i++)
    {
        y=((n-i)+((n-i-1)*i));
        x=x+y;
    }


    cout<<x<<endl;
    return 0;
}

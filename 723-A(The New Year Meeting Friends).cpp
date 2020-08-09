#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],x,y;
    for(int i=0;i<3;i++)
    {
     cin>>a[i];
    }
    sort(a,a+3);
    x=a[2]-a[0];


    cout<<x<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,y,cnt=0;
    float x;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        x=((1.0*n)/(i));
      // if(x==(int)x);
        y=(n/i);
        if(x==y)
        cnt++;
        //  cout<<x<<endl;

    }
    cout<<cnt<<endl;

    return 0;
}
